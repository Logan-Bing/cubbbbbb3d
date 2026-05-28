#include "header.h"

extern int	case_s;
extern int	map_x;
extern int	map_y;
extern char	map[8][8];

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

void	draw_x_pixels(t_game *game, int length, int x, int y, int color)
{
	for (int i = 0; i < length; i++)
		my_mlx_pixel_put(game->img, x + i, y, color);
}

void	draw_player(t_game *game)
{
	t_player	*player;

	player = game->player;
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			my_mlx_pixel_put(game->img,
			player->x * case_s + (case_s / 2) - 5 + x,
			player->y * case_s + (case_s / 2) - 5 + y,
				BLUE);
		}
	}
}

void draw_line(t_game *game, int x0, int y0, int x1, int y1, int color)
{
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);

    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;

    int err = dx - dy;

    while (1)
    {
        my_mlx_pixel_put(game->img, x0, y0, color);

        if (x0 == x1 && y0 == y1)
            break;

        int e2 = 2 * err;

        if (e2 > -dy)
        {
            err -= dy;
            x0 += sx;
        }
        if (e2 < dx)
        {
            err += dx;
            y0 += sy;
        }
    }
}

void	draw_dir(t_game *game)
{
	t_player *player = game->player;

	// position du joueur sur l'écran
	int py = player->y * case_s + (case_s / 2);
	int px = player->x * case_s + (case_s / 2);

	double x = px;
	double y = py;

	/* =========================
	   DDA SETUP
	   ========================= */

	// map position
	int mapX = px / case_s;
	int mapY = py / case_s;

	// direction du pas dans la grille
	int stepX;
	int stepY;

	// distance jusqu'à la prochaine ligne de grille
	double sideDistX;
	double sideDistY;

	// distance entre deux lignes de grille
	double deltaDistX = (player->pdx == 0) ? 1e30 : fabs(1 / player->pdx);
	double deltaDistY = (player->pdy == 0) ? 1e30 : fabs(1 / player->pdy);

	// hit wall ?
	int hit = 0;
	int side; // 0 = vertical, 1 = horizontal

	/* =========================
	   INIT SIDE DIST
	   ========================= */

	if (player->pdx < 0)
	{
		stepX = -1;
		sideDistX = (x - mapX * case_s) * deltaDistX / case_s;
	}
	else
	{
		stepX = 1;
		sideDistX = ((mapX + 1) * case_s - x) * deltaDistX / case_s;
	}

	if (player->pdy < 0)
	{
		stepY = -1;
		sideDistY = (y - mapY * case_s) * deltaDistY / case_s;
	}
	else
	{
		stepY = 1;
		sideDistY = ((mapY + 1) * case_s - y) * deltaDistY / case_s;
	}

	/* =========================
	   DDA LOOP
	   ========================= */

	while (hit == 0)
	{
		if (sideDistX < sideDistY)
		{
			sideDistX += deltaDistX;
			mapX += stepX;
			side = 0; // mur vertical
		}
		else
		{
			sideDistY += deltaDistY;
			mapY += stepY;
			side = 1; // mur horizontal
		}

		if (map[mapY][mapX] == '1')
			hit = 1;
	}

	/* =========================
	   RESULT
	   ========================= */

	// // distance finale (simplifiée ici)
	// double dist;
	// if (side == 0)
	// 	dist = sideDistX - deltaDistX;
	// else
	// 	dist = sideDistY - deltaDistY;

	double perpWallDist;

	if (side == 0)
		perpWallDist = sideDistX - deltaDistX;
	else
		perpWallDist = sideDistY - deltaDistY;

	/* point d’impact */
	double hitX = px + player->pdx * perpWallDist * case_s;
	double hitY = py + player->pdy * perpWallDist * case_s;

	/* =========================
	   TRACE FINAL
	   ========================= */

	draw_line(game, px, py, (int)hitX, (int)hitY, 0x00FF00);
}

void	draw_map(t_game *game)
{
	int	color;
	int	dx;
	int	dy;

	for (int y = 0; y < map_y; y++)
	{
		for (int x = 0; x < map_x; x++)
		{
			if (map[y][x] == '1')
				color = WHITE;
			else
				color = BLACK;
			dy = 0;
			while (dy < case_s)
			{
				dx = 0;
				while (dx < case_s)
				{
					if (case_s - 1 == dx || case_s - 1 == dy)
						my_mlx_pixel_put(game->img, x * case_s + dx, y * case_s + dy, GRAY);
					else
						my_mlx_pixel_put(game->img, x * case_s + dx, y * case_s + dy, color);
					dx++;
				}
				dy++;
			}
		}
	}
}

void	draw_game(t_game *game)
{
	draw_map(game);
	draw_player(game);
	draw_dir(game);
	mlx_put_image_to_window(game->mlx, game->win, game->img->img, 0, 0);
}


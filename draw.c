#include "header.h"
#include <math.h>

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

void	draw_rays(t_game *game)
{
	t_player *player = game->player;

	// position du joueur sur l'ecran
	int py = player->y * case_s + (case_s / 2);
	int px = player->x * case_s + (case_s / 2);

	for (int i = 0; i < 100; i++)
	{
		int y = py + player->dy * i;
		int x = px + player->dx * i;

		my_mlx_pixel_put(game->img, x, y, RED);
	}

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
	draw_rays(game);
	mlx_put_image_to_window(game->mlx, game->win, game->img->img, 0, 0);
}


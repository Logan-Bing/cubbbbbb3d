#include "header.h"

extern int	case_s;
extern int	map_x;
extern int	map_y;
extern char	map[8][8];

int	handle_close(t_game *game)
{
	mlx_destroy_image(game->mlx, game->img->img);
	mlx_destroy_window(game->mlx, game->win);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
	exit(0);
}

int	handle_keypress(int keycode, t_game *game)
{
	t_player *player = game->player;


	if (keycode == KEY_ESC)
		handle_close(game);
	else if (keycode == KEY_UP)
	{
		player->y += player->pdy * 0.2;
		player->x += player->pdx * 0.2;
		printf("x: %f\n", player->pdx);
		printf("y: %f\n", player->pdy);
	}
	else if (keycode == KEY_DOWN)
	{
		player->y -= player->pdy * 0.2;
		player->x -= player->pdx * 0.2;
		printf("x: %f\n", player->pdx);
		printf("y: %f\n", player->pdy);
	}

	if (keycode == KEY_LEFT)
	{ 
		player->pa -= 0.1; 
		if(player->pa < 0)
			player->pa += 2*PI;
		player->pdx = cos(player->pa); 
		player->pdy = sin(player->pa);
	}

	if (keycode == KEY_RIGHT)
	{ 
		player->pa += 0.1; 
		if(player->pa > 2*PI)
			player->pa = 0;
		player->pdx = cos(player->pa); 
		player->pdy = sin(player->pa);
	}

	draw_game(game);
	return (0);
}

void	init_hooks(t_game *game)
{
	mlx_hook(game->win, 2, 1L << 0, (void *)handle_keypress, game);
	mlx_hook(game->win, 17, 0, (void *)handle_close, game);
}

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
			player->y -= 0.2;
	else if (keycode == KEY_DOWN)
			player->y += 0.2;
	else if (keycode == KEY_LEFT)
			player->x -= 0.2;
	else if (keycode == KEY_RIGHT)
			player->x += 0.2;
	else if (keycode == A)
			player->dx -= 0.2;
	else if (keycode == D)
			player->dx += 0.2;

	draw_game(game);
	return (0);
}

void	init_hooks(t_game *game)
{
	mlx_hook(game->win, 2, 1L << 0, (void *)handle_keypress, game);
	mlx_hook(game->win, 17, 0, (void *)handle_close, game);
}

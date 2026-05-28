#include "header.h"
#include <math.h>

int		map_x = 8;
int		map_y = 8;
int		case_s = 64;

char	map[8][8] =
{
	{'1', '1', '1', '1', '1', '1', '1', '1'},
	{'1', '0', '1', '0', '0', '0', '0', '1'},
	{'1', '0', '1', '0', '0', '0', '0', '1'},
	{'1', '0', '1', '0', '0', '0', '0', '1'},
	{'1', '0', '0', '0', '0', '0', '0', '1'},
	{'1', '0', '0', '0', '1', '0', '0', '1'},
	{'1', '0', '0', '0', '0', '0', '0', '1'},
	{'1', '1', '1', '1', '1', '1', '1', '1'},
};

int	main(void)
{
	void		*mlx;
	void		*mlx_win;
	t_data		img;
	t_game		game;
	t_player	player;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, WIN_W, WIN_H, "Hello world!");
	img.img = mlx_new_image(mlx, WIN_W, WIN_H);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	player.x = 4.0;
	player.y = 4.0;

	// Init l'angle a 0
	player.pa = -0.52;

	player.pdx = cos(player.pa);
	player.pdy = sin(player.pa);

	game.mlx = mlx;
	game.win = mlx_win;
	game.player = &player;
	game.img = &img;
	draw_game(&game);
	init_hooks(&game);
	mlx_loop(mlx);
}

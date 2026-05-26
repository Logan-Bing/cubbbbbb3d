#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <stdio.h>
# include "minilibx-linux/mlx.h"

# define KEY_ESC		65307
# define KEY_UP			65362
# define KEY_DOWN		65364
# define KEY_LEFT		65361
# define KEY_RIGHT		65363
# define W				119
# define S				115
# define D				100
# define A				97

# define WIN_W			512
# define WIN_H			512

# define BLACK			0x000000
# define WHITE			0xFFFFFF
# define RED			0xFF0000
# define GREEN			0x00FF00
# define BLUE			0x0000FF
# define YELLOW			0xFFFF00
# define CYAN			0x00FFFF
# define MAGENTA		0xFF00FF
# define GRAY			0x808080
# define ORANGE			0xFF8000



typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;


typedef struct s_player
{
	// position
	double	x;
	double	y;
	// direction
	double		dx;
	double		dy;
} t_player;

typedef struct s_game
{
	void	*mlx;
	void	*win;
	t_data	*img;
	t_player *player;
}	t_game;


//////////// DRAW ///////////////////
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	draw_x_pixels(t_game *game, int length, int x, int y, int color);
void	draw_player(t_game *game);
void	draw_map(t_game *game);
void	draw_game(t_game *game);

//////////// HOOK ///////////////////
int		handle_close(t_game *game);
int		handle_keypress(int keycode, t_game *game);
void	init_hooks(t_game *game);

#endif

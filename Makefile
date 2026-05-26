NAME = cub3d
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = main.c hook.c draw.c
LIBFT_DIR = libft
LIBFT = libft/libft.a
OBJS = $(SRCS:.c=.o)

MLX_DIR = minilibx-linux
MLX_LIB = mlx

all: $(NAME)

$(NAME): $(OBJS) $(MLX_LIB)
	$(CC) $(OBJS) -L$(MLX_DIR) -l$(MLX_LIB) -L$(LIBFT_DIR) -lft -I$(MLX_DIR) -lXext -lX11 -lm -lz -o $(NAME)

%.o: %.c $(LIBFT)
	$(CC) $(FLAGS) -I$(MLX_DIR) -c $< -o $@

$(MLX_LIB):
	make -C $(MLX_DIR)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	make clean -C $(LIBFT_DIR)
	rm -rf $(OBJS)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -rf $(NAME)

re: fclean all

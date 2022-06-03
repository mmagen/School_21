/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:52:23 by mmagen            #+#    #+#             */
/*   Updated: 2021/09/15 15:02:13 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "get_next_line.h"
# include <mlx.h>
# include <stdlib.h>

typedef struct s_map
{
	char	**map;
	int		cnt;
	int		height;
	int		width;
	int		cnt_p;
	int		cnt_e;
	int		cnt_c;
}				t_map;

typedef struct s_img
{
	void	*img;
	char	*path;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_img;
typedef struct s_plr_pos
{
	int	x;
	int	y;
}				t_plr_pos;
typedef struct s_game
{
	t_plr_pos	plr_pos;
	t_img		player;
	t_img		wall;
	t_img		exit;
	t_img		money;
	t_img		bg;
	t_map		*map;
	void		*x_id;
	void		*win;
	int			cnt;
	int			cnt_mv;
}				t_game;
# define ESC 53
# define W 13
# define A 0
# define S 1
# define D 2
# define SYMBOL_MAP "01CPE"

void	check_filename(char *file_name);
void	ft_errors(int err);
t_map	parse_map(char *path);
int		valid_map(t_map map);
void	load_textures(t_game *game);
void	build_map(t_game **game);
int		get_cnt(t_map map);
int		key_hook(int key, t_game **game);
void	get_cur_pos(t_game **game);
void	draw_map(t_game **game);
void	move_up(t_game **game);
void	move_down(t_game **game);
void	move_left(t_game **game);
void	move_right(t_game **game);
int		close_window(int key, t_game **game);
void	run_game(t_map map);
void	load_bg(t_game *game);
void	load_wall(t_game *game);
void	load_player(t_game *game);
void	load_ball(t_game *game);
void	load_exit(t_game *game);
void	build_wall(t_game *game, int i, int k);
void	build_bg(t_game *game, int i, int k);
void	build_player(t_game *game, int i, int k);
void	build_ball(t_game *game, int i, int k);
void	build_exit(t_game *game, int i, int k);
int		get_height(t_map map);
int		get_width(t_map map);
void	check_min_map(t_map map);
void	check_conture(t_map map);
int		open_file(char *path);
int		count_str(char *path);
void	check_symbol(t_map map);

size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strdup(const char *s1);
void	ft_putstr_fd(char *s, int fd);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:31:04 by mmagen            #+#    #+#             */
/*   Updated: 2021/09/14 16:24:52 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	close_window(int key, t_game **game)
{
	(void) key;
	(void) game;
	exit(0);
}

void	run_game(t_map map)
{
	t_game	*game;

	game = malloc(sizeof(t_game) * 1);
	if (!game)
		ft_errors(1);
	game->map = &map;
	game->x_id = mlx_init();
	game->win = mlx_new_window(game->x_id,
			game->map->width * 100,
			game->map->height * 100, "fg_long");
	game->cnt = get_cnt(map);
	game->cnt_mv = 0;
	build_map(&game);
	ft_putnbr_fd(game->cnt_mv, 1);
	ft_putchar_fd('\n', 1);
	mlx_key_hook(game->win, key_hook, &game);
	mlx_hook(game->win, 17, 131072L,
		close_window, &game);
	mlx_loop(game->x_id);
}

void	check_filename(char *file_name)
{
	int			len;
	const char	*start;

	len = ft_strlen(file_name);
	start = (const char *) &file_name[(len - 4)];
	if (ft_strncmp(start, ".ber", 4) != 0)
		ft_errors(1);
}

int	main(int argc, char **argv)
{
	t_map	map;

	if (argc != 2)
		exit(1);
	check_filename(argv[1]);
	map = parse_map(argv[1]);
	if (valid_map(map))
		run_game(map);
	exit(1);
}

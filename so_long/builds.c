/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builds.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:19:49 by mmagen            #+#    #+#             */
/*   Updated: 2021/09/14 15:19:51 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	build_wall(t_game *game, int i, int k)
{
	mlx_put_image_to_window(
		game->x_id,
		game->win,
		game->wall.img,
		k * 100, i * 100);
}

void	build_bg(t_game *game, int i, int k)
{
	mlx_put_image_to_window(game->x_id, game->win, game->bg.img,
		k * 100, i * 100);
}

void	build_player(t_game *game, int i, int k)
{
	mlx_put_image_to_window(game->x_id, game->win, game->player.img,
		k * 100, i * 100);
}

void	build_ball(t_game *game, int i, int k)
{
	mlx_put_image_to_window(game->x_id, game->win, game->money.img,
		k * 100, i * 100);
}

void	build_exit(t_game *game, int i, int k)
{
	mlx_put_image_to_window(game->x_id, game->win, game->exit.img,
		k * 100, i * 100);
}

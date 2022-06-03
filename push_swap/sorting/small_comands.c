/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:31:08 by mmagen            #+#    #+#             */
/*   Updated: 2021/10/22 15:09:10 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_1(t_lst **a, t_main *info)
{
	swap(a, 0, "sa\n", info);
	rotate(a, 0, "ra\n", info);
}

void	s_2(t_lst **a, t_main *info)
{
	swap(a, 0, "sa\n", info);
}

void	s_3(t_lst **a, t_main *info)
{
	rotate(a, 0, "ra\n", info);
}

void	s_4(t_lst **a, t_main *info)
{
	reverse_rotate(a, 0, "rra\n", info);
}

void	s_5(t_lst **a, t_main *info)
{
	rotate(a, 0, "ra\n", info);
	swap(a, 0, "sa\n", info);
}

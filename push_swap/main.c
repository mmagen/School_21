/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:14:37 by mmagen            #+#    #+#             */
/*   Updated: 2021/11/01 16:36:56 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_lst	*lst;

	argc--;
	argv++;
	if (!argc)
		exit(0);
	lst = valide_input(argc, argv);
	ft_sorted(lst);
}

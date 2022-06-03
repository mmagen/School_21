/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:59:47 by mmagen            #+#    #+#             */
/*   Updated: 2021/10/30 16:59:48 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	k;
	int				i;
	char			s[12];

	i = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		k = -n;
	}
	else
		k = n;
	while (k > 0)
	{
		s[i++] = k % 10 + 48;
		k /= 10;
	}
	i--;
	while (i >= 0)
		ft_putchar_fd(s[i--], fd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 18:38:11 by mmagen            #+#    #+#             */
/*   Updated: 2021/08/11 15:44:11 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_send	g_bits;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	k;
	int				i;
	char			s[12];

	i = 0;
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
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
		ft_putchar(s[i--]);
}

void	sig_handler(int signum)
{
	if (signum == SIGUSR1)
	{
		g_bits.bit_char = (g_bits.bit_char << 1) | 1;
	}
	else
	{
		g_bits.bit_char = (g_bits.bit_char << 1);
	}	
	g_bits.i--;
	if (g_bits.i == -1)
	{
		write(1, &g_bits.bit_char, 1);
		g_bits.i = 7;
	}
}

int	main(void)
{
	g_bits.i = 7;
	g_bits.bit_char = 0;
	write(1, "Servers PID is : ", 17);
	ft_putnbr(getpid());
	write(1, "\n", 1);
	signal(SIGUSR1, sig_handler);
	signal(SIGUSR2, sig_handler);
	while (1)
		pause();
}

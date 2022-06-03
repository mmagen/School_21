/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 18:37:49 by mmagen            #+#    #+#             */
/*   Updated: 2021/08/11 15:50:38 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_exit(int a)
{
	if (a == 5)
		write(1, "Error: Wrong PID\n", 17);
	else if (a == 4)
		write(1, "Error: System PID\n", 18);
	else if (a == 3)
		write(1, "Error: write ONLY PID and String\n", 48);
	exit(a);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				minus;
	unsigned int	num;

	minus = 1;
	num = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ' )
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i++] - '0';
	}
	return (num * minus);
}

void	send_char(char byte, int pid)
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		if ((byte >> 7) == 0)
		{
			if (kill(pid, SIGUSR2) == -1)
				ft_exit(5);
		}
		else
		{
			if (kill(pid, SIGUSR1) == -1)
				ft_exit(5);
		}
		byte <<= 1;
		usleep(300);
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	int		i;

	if (argc != 3)
		ft_exit(3);
	pid = ft_atoi(argv[1]);
	if (pid == 0)
		ft_exit(4);
	i = 0;
	while (argv[2][i])
		send_char(argv[2][i++], pid);
}

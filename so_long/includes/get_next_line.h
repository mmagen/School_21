/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagen <mmagen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:20:24 by mmagen            #+#    #+#             */
/*   Updated: 2021/09/14 15:20:27 by mmagen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include "limits.h"
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 35
# endif

char	*ft_strchrs(const char *s, int c);
int		is_n(char *s);
int		get_next_line(int fd, char **line);
char	*ft_strjoins(char const *s1, char const *s2);
char	*ft_strdups(const char *s1);
int		ft_strlens(const char *s);

#endif
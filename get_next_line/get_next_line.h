#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include "limits.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 35
# endif

char	*ft_strchr(const char *s, int c);
int		is_n(char *s);
int		get_next_line(int fd, char **line);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
int		ft_strlen(const char *s);

#endif
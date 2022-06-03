#include "get_next_line.h"

int	check_bytes(int b)
{
	if (b == 0)
		return (0);
	else
		return (1);
}

int	if_no_read(char **buf)
{
	free(*buf);
	return (-1);
}

void	put_to_line(char **remainder, char **line)
{
	char	*temp;
	char	*is_n;

	if (!*remainder)
	{
		*line = ft_strdup("");
	}
	is_n = ft_strchr(*remainder, '\n');
	if (!is_n)
	{
		*line = ft_strdup(*remainder);
		free(*remainder);
		*remainder = 0;
	}
	else
	{
		temp = *remainder;
		*is_n = 0;
		*line = ft_strdup(*remainder);
		is_n++;
		*remainder = ft_strdup(is_n);
		free(temp);
	}
}

int	get_next_line(int fd, char **line)
{
	char		*buff;
	static char	*remainder[OPEN_MAX];
	int			read_bytes;
	char		*temp;

	read_bytes = 1;
	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (-1);
	while (!is_n(remainder[fd]) && read_bytes)
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes < 0)
			return (if_no_read(&buff));
		buff[read_bytes] = 0;
		temp = remainder[fd];
		remainder[fd] = ft_strjoin(remainder[fd], buff);
		free(temp);
	}
	free(buff);
	put_to_line(&remainder[fd], line);
	return (check_bytes(read_bytes));
}

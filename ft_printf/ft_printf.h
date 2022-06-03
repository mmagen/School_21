#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_format_spec
{
	char	type;
	int		width;
	int		minus;
	int		zero;
	int		percision;
	char	sign;
}				t_params;

int		ft_printf(const char *format, ...);
char	*read_flags(const char *format, t_params *params, va_list args);
int		print_specs(const char *format, t_params *params, va_list args);
void	start_params(t_params *params);
int		print_int(va_list args, t_params *params, int *length);
int		print_space(t_params *params, int len);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
int		print_min(char *numb, int str_len, int length, t_params *params);
int		print_zero(t_params *params, int str_len);
int		print_zero_percision(t_params *params, int str_len);
int		print_plus(char *numb, int str_len, int length, t_params *params);
void	print_char(va_list args, t_params *params, int *length);
int		print_str(va_list args, t_params *params, int *length);
int		print_point(va_list args, t_params *params, int *length);
char	*hex_mod(unsigned long adr);
int		print_unsigned(va_list args, t_params *params, int *length);
int		print_hex(va_list args, t_params *params, int *length);
char	ft_convert_L(unsigned int num);
int		print_zero(t_params *params, int str_len);
int		print_zero_percision(t_params *params, int str_len);
int		for_space(int actlen, int len, int length, t_params *params);

#endif
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"

int ft_printf(const char *TEMPLATE, ...); 
ssize_t ft_printf_hex_lower(unsigned long int n);
ssize_t ft_printf_hex_upper(unsigned long int n);
ssize_t ft_printf_uint(unsigned int);
void reverse_array(char *str, int end);
char *int2hex(unsigned long int n, unsigned char op);
ssize_t ft_printf_ptr(unsigned long int n);
#endif

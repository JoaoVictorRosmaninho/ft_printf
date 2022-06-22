#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"

int ft_printf(const char *TEMPLATE, ...); 
ssize_t ft_printf_hex_lower(unsigned long int n);
ssize_t ft_printf_hex_upper(unsigned long int n);
#endif

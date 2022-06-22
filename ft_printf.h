#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"

int ft_printf(const char *TEMPLATE, ...); 
ssize_t ft_printf_hex(unsigned long int n);
#endif

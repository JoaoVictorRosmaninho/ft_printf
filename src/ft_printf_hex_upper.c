#include "../ft_printf.h"

ssize_t ft_printf_hex_upper(unsigned long int n)
{
  ssize_t len;
  char *number;
  
  len = 0;
  len = ft_putstr_fd("0x", 1); 
  number = int2hex(n, 1);  
  len += ft_putstr_fd(number, 1);
  free(number);
  return (len);
}

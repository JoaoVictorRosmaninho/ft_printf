#include "../ft_printf.h"

ssize_t ft_printf_hex_lower(int n)
{
  ssize_t len;
  char *number;
 
  len = 0;
  if (!n)
   len = ft_putstr_fd("0", 1); 
  else 
  {
      number = int2hex(n, 0); 
      len += ft_putstr_fd(number, 1);
      free(number);   
  }
  return (len);
}

#include "../ft_printf.h"

ssize_t ft_printf_ptr(unsigned long int n)
{
  ssize_t len;

  len = 0;
  if (!n)
  {
    ft_putstr_fd("(nil)", 1);
    len = 5;
  }
  else 
    len = ft_printf_hex_lower(n);
  return (len);
}

#include "../ft_printf.h"

ssize_t ft_printf_hex_upper(unsigned long int n)
{
  ssize_t len;
  char number[128];
  unsigned char index = 0;
  
  len = 0;
  len = ft_putstr_fd("0x", 1); 
  while (n > 0)
  {
    char ch = n % 16; 
    if (ch > 9)
      number[index++] = 'A' + (ch - 10);
    else 
      number[index++] = '0' + ch;
    n /= 16;
  }
  number[index] = '\0';
  reverse_array(number, ft_strlen(number) - 1);
  len += ft_putstr_fd(number, 1);
  return (len);
}

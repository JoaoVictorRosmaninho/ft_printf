#include "../ft_printf.h"


void reverse_array(char *str, int end)
{
  int ini;
  char ch;

  ini = 0;
  while (ini < end)
  {
    ch = str[ini];
    str[ini] = str[end];
    str[end] = ch;
    ini++;
    end--;
  }
}

ssize_t ft_printf_hex(unsigned long int n)
{
  ssize_t len;
  char number[12];
  unsigned char index = 0;
  
  len = 0;
  len = ft_putstr_fd("0x", 1); 
  while (n > 0)
  {
    char ch = n % 16; 
    if (ch > 9)
      number[index++] = 'a' + (ch - 10);
    else 
      number[index++] = '0' + ch;
    n /= 16;
  }
  number[index] = '\0';
  reverse_array(number, ft_strlen(number) - 1);
  len += ft_putstr_fd(number, 1);
  return (len);
}

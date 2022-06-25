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

char *int2hex(unsigned long int n, unsigned char op)
{
  char number[128];
  unsigned char index;

  index = 0;
  while (n > 0)
  {
    char ch = n % 16; 
    if (ch > 9)
    {
      if (!op)
        number[index++] = 'a' + (ch - 10);
      else 
        number[index++] = 'A' + (ch - 10);
    }
    else 
      number[index++] = '0' + ch;
    n /= 16;
  }
  number[index] = '\0';
  reverse_array(number, ft_strlen(number) - 1);
  return (ft_strdup(number));
}

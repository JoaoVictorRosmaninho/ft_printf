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

char *int2hex(unsigned int n, unsigned char op)
{
  char number[128];
  unsigned char index;
  char ch;

  index = 0;
  ft_memset(number, 0, 128);
  while (n > 0)
  {
    ch = n % 16; 
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
  reverse_array(number, index - 1);
  return (ft_strdup(number));
}

char *lint2hex(unsigned long int n)
{
  char number[128];
  unsigned char index; 
  char ch;

  index = 0;
  ft_memset(number, 0, 128);
  while (n > 0)
  {
    ch = n % 16; 
    if (ch > 9)
      number[index++] = 'a' + (ch - 10);
    else 
      number[index++] = '0' + ch;
    n /= 16;
  }
  number[index] = '\0';
  reverse_array(number, index - 1);
  return (ft_strdup(number));
}

#include "../ft_printf.h"

ssize_t ft_printf_uint(unsigned int num)
{
   char number[11];
   unsigned char index;

   index = 0;
   while (num > 0)
   {
      number[index++] = num % 10;
      num /= 10;
   }
}

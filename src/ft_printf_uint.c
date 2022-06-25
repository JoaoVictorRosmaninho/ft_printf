#include "../ft_printf.h"

ssize_t ft_printf_uint(unsigned int num)
{
   char number[16];
   unsigned char index;

   index = 0;
   if (!num)
     number[index++] = '0';
   else 
   {
       while (num > 0)
       {
          number[index++] = '0' + (num % 10);
          num /= 10;
       }
   }
   number[index] = '\0';
   reverse_array(number, index - 1);
   return (ft_putstr_fd(number, 1));
}

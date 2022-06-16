
void parser(char token)
{
}


int ft_printf(const char *TEMPLATE)
{
  size_t index;

  index = 0;
  while (TEMPLATE[index])
  {
    if (TEMPLATE[index] == '%')
      parser(TEMPLATE + index + 1);
    index++;
  }
  if (!TEMPLATE)
    return (0);
}


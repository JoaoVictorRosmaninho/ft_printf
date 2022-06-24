
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

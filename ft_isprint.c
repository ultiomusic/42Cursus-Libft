#include <stdio.h>

int ft_isprint(int c)
{
  if (c >= ' ' && c <= '~')
  return (1);
  return (0);
}
/*
int main()
{
  char c1 = 12 ;
  char c2 = 'A';
  printf("%c%c",c1, c2);
  return (0);
}
*/
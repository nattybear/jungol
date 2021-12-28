#include <stdio.h>

int main()
{
  char cs[10];
  int i;
  for (i = 0; i < 10; i++)
    scanf(" %c", &cs[i]);
  for (i = 9; i >= 0; i--)
    printf("%c ", cs[i]);
  puts("");
  return 0;
}

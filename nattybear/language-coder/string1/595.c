#include <stdio.h>

int main()
{
  char *foo = "Hong Gil Dong";
  for (int i = 3; i <= 6; i++)
    printf("%c", foo[i]);
  puts("");
  return 0;
}

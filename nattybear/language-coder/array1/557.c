#include <stdio.h>

int main()
{
  char chars[10];
  for (int i = 0; i < 10; i++)
    scanf(" %c", &chars[i]);
  for (int i = 0; i < 7; i += 3)
    printf("%c ", chars[i]);
  puts("");
  return 0;
}

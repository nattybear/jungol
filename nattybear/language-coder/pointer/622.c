#include <stdio.h>

int main()
{
  int xs[5];
  int *p = xs;
  for (int i = 0; i < 5; i++)
    scanf("%i", p + i);
  for (int i = 0; i < 5; i++)
    if ((i+1) % 2 == 1)
      printf("%i ", *(p + i));
  puts("");
  return 0;
}

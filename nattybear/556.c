#include <stdio.h>

int main()
{
  int xs[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 0; i < 10; i++)
    printf("%i ", xs[i]);
  puts("");
  return 0;
}

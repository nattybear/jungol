#include <stdio.h>

int main()
{
  int xs[5];
  int sum = 0;
  int i;
  for (i = 0; i < 5; i++)
    scanf(" %i", &xs[i]);
  for (i = 0; i < 5; i += 2)
    sum += xs[i];
  printf("%i\n", sum);
  return 0;
}

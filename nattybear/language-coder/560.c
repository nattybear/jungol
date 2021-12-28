#include <stdio.h>

int main()
{
  int xs[10];
  for (int i = 0; i < 10; i++)
    scanf(" %i", &xs[i]);
  int min = 1000;
  for (int i = 0; i < 10; i++)
    min = (xs[i] < min) ? xs[i] : min;
  printf("%i\n", min);
  return 0;
}

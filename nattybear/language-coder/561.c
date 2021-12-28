#include <stdio.h>

int main()
{
  int xs[10];
  for (int i = 0; i < 10; i++)
    scanf(" %i", &xs[i]);
  int max = 0;
  int min = 10000;
  for (int i = 0; i < 10; i++) {
    int x = xs[i];
    if (x < 100)
      max = (max > x) ? max : x;
    else
      min = (min < x) ? min : x;
  }
  if (max == 0)
    max = 100;
  if (min == 10000)
    min = 100;
  printf("%i %i\n", max, min);
  return 0;
}

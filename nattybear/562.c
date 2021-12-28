#include <stdio.h>

int main()
{
  int xs[10];
  for (int i = 0; i < 10; i++)
    scanf(" %i", &xs[i]);
  int even = 0;
  int odd = 0;
  for (int i = 0; i < 10; i++) {
    int x = xs[i];
    if (i % 2 != 0)
      even += x;
    else
      odd += x;
  }
  float avg = (float) odd / 5;
  printf("sum : %i\n", even);
  printf("avg : %.1f\n", avg);
  return 0;
}

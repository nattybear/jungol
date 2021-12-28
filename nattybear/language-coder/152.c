#include <stdio.h>

int main()
{
  int xs[10];
  int odd = 0;
  int even = 0;
  int i, j;
  for (i = 0; i < 10; i++)
    scanf(" %i", &xs[i]);
  for (i = 0; i < 10; i++) {
    if (i % 2 == 0)
      odd += xs[i];
    else
      even += xs[i];
  }
  printf("odd : %i\n", odd);
  printf("even : %i\n", even);
  return 0;
}

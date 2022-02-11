#include <stdio.h>

int main()
{
  int xs[10];
  int odd = 0;
  int even = 0;
  for (int i = 0; i < 10; i++) {
    scanf("%i ", xs + i);
    if (*(xs+i) % 2 == 0)
      even++;
    else
      odd++;
  }
  printf("odd : %i\n", odd);
  printf("even : %i\n", even);
  return 0;
}

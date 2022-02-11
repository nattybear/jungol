#include <stdio.h>

int main()
{
  int a[10];
  int *p = a;
  int odd = 0, even = 0;
  for (int x = 0; x < 10; x++)
    scanf("%d ", &p[x]);
  for (int x = 0; x < 10; x++)
  {
    if (p[x]%2 == 0)
      even++;
    else
      odd++;
  }
  printf("odd : %d\neven : %d\n", odd, even);
  return 0;
}

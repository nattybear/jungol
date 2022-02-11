#include <stdio.h>

int main()
{
  int n, m;
  int *p = &n;
  int *q = &m;
  scanf("%i %i", p, q);
  printf("%i + %i = %i\n", *p, *q, *p + *q);
  printf("%i - %i = %i\n", *p, *q, *p - *q);
  printf("%i * %i = %i\n", *p, *q, *p * *q);
  printf("%i / %i = %i\n", *p, *q, *p / *q);
  return 0;
}

#include <stdio.h>

int main()
{
  int n;
  int *p = &n;
  scanf("%i", p);
  int quotient = *p / 10;
  int remainder = *p % 10;
  printf("%i...%i\n", quotient, remainder);
  return 0;
}

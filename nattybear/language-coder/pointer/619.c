#include <stdio.h>

int main()
{
  int n;
  int *p = &n;
  scanf("%i", &n);
  printf("%#p %i\n", p, *p);
  return 0;
}

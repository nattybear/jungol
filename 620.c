#include <stdio.h>

int main()
{
  int x;
  int *p = &x;
  scanf("%d", &x);
  printf("%d...%d\n", *p/10, *p%10);
  return 0;
}



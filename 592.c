#include <stdio.h>

int foo (int n)
{
  if (n == 0)
    return 0;

  return (((n%10)*(n%10)) + foo(n/10));
}

int main()
{
  int n = 0;
  scanf("%d", &n);
  printf("%d\n", foo(n));
  return 0;
}

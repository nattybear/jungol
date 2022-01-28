#include <stdio.h>

void foo(int n)
{
  if (n == 0)
    return;
  printf("%i ", n);
  foo(n - 1);
}

int main()
{
  int n;
  scanf("%i", &n);
  foo(n);
  puts("");
  return 0;
}

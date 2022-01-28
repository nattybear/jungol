#include <stdio.h>

void foo(int n)
{
  if (n == 0)
    return;
  puts("recursive");
  foo(n - 1);
}

int main()
{
  int n;
  scanf("%i", &n);
  foo(n);
  return 0;
}

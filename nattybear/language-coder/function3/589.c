#include <stdio.h>

int sum(int n)
{
  if (n == 0)
    return 0;
  return n + sum(n - 1);
}

int main()
{
  int n;
  scanf("%i", &n);
  printf("%i\n", sum(n));
  return 0;
}

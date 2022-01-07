#include <stdio.h>

void foo()
{
  puts("~!@#$^&*()_+|");
}

int main()
{
  int n;
  scanf("%i", &n);
  for (int i = 0; i < n; i++)
    foo();
  return 0;
}

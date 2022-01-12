#include <stdio.h>

int Fibonacci (int a)
{
  int n[a + 1];
  n[0] = 0;
  n[1] = 1;
  if (a == 0)
    return 0;
  for (int i = 2; i <= a; i++)
    n[i] = n[i - 1] + n[i - 2];
  printf("%d\n", n[a]);
}

int main()
{
  int a;
  scanf("%d", &a);
  Fibonacci(a);
return 0;
}

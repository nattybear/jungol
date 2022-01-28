#include <stdio.h>

int sum_of_square(int n)
{
  if (n < 10)
    return n * n;
  int remainder = n % 10;
  int quotient = n / 10;
  int square = remainder * remainder;
  return square + sum_of_square(quotient);
}

int main()
{
  int n;
  scanf("%i", &n);
  printf("%i\n", sum_of_square(n));
  return 0;
}

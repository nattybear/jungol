#include <stdio.h>

int main()
{
  int x, y;
  int sum = 0;
  fscanf(stdin, "%d %d", &x, &y);
  for (int i = x; i <= y; i++)
    sum += i;
  fprintf(stdout, "%d\n", sum);
  return 0;
}

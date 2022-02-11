#include <stdio.h>
#include <math.h>

int main()
{
  double xs[5];
  double *p = xs;
  for (int i = 0; i < 5; i++)
    scanf(" %lf", p + i);
  for (int i = 0; i < 5; i++)
    printf("%.1lf ", round(*(p+i) * 10) / 10);
  puts("");
  return 0;
}

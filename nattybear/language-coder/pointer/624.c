#include <stdio.h>
#include <math.h>

double sum(double *xs, int n)
{
  double s = 0;
  for (int i = 0; i < n; i++)
    s += xs[i];
  return s;
}

int main()
{
  int n;
  scanf("%i", &n);
  double xs[n];
  for (int i = 0; i < n; i++)
    scanf(" %lf", xs + i);
  for (int i = 0; i < n; i++)
    printf("%.2lf ", round(*(xs+i) * 100) / 100);
  puts("");
  printf("hap : %.2lf\n", sum(xs, n));
  printf("avg : %.2lf\n", sum(xs, n) / n);
  return 0;
}

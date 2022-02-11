#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
  if (*(int*)a < *(int*)b)
    return 1;
  else
    return -1;
}

int main()
{
  int n;
  scanf("%i", &n);
  int xs[n];
  for (int i = 0; i < n; i++)
    scanf(" %i", &xs[i]);
  qsort(xs, n, sizeof(int), compare);
  for (int i = 0; i < n; i++)
    printf("%i ", xs[i]);
  puts("");
  return 0;
}

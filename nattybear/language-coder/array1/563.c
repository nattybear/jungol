#include <stdio.h>

int main()
{
  int a[10];
  int max;
  int maxindex;
  int i, j;

  for (i = 0; i < 10; i++)
    scanf(" %i", &a[i]);

  for (i = 0; i < 9; i++)
  {
    maxindex = i;
    max = a[i];
    for (j = i + 1; j < 10; j++)
    {
      if (max < a[j])
      {
        max = a[j];
        maxindex = j;
      }
    }
    a[maxindex] = a[i];
    a[i] = max;
  }

  for (i = 0; i < 10; i++)
    printf("%i ", a[i]);

  puts("");
  return 0;
}

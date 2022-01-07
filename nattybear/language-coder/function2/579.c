#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
  int x = *(int*)a;
  int y = *(int*)b;
  return y - x;
}

int main()
{
  int n;
  scanf("%i", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%i", &arr[i]);
  qsort(arr, n, sizeof(int), compare);
  for (int i = 0; i < n; i++)
    printf("%i ", arr[i]);
  puts("");
  return 0;
}

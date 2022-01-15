#include <stdio.h>

int sort (int i)
{
  if (i == 0)
    return 0;
  puts("recursive");
  i--;
  sort(i);
}

int main()
{
  int n;
  scanf("%d" ,&n);
  sort(n);
  return 0;
}

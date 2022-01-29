#include <stdio.h>
#include <string.h>

int main()
{
  char *a;
  int x = 0;
  scanf("%s %d", a, &x);
  int n = strlen(a);
  int q = n - 1;
  if (n < x)
    for (int i = n - 1; i >= 0; i--)
      printf("%c", a[i]);
  else
  {
    for (int i = 1; i <= x; i++)
    {
      printf("%c", a[q]);
      q--;
    }
  }
  puts("");
  return 0;
}

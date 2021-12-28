#include <stdio.h>

int main()
{
  int n;
  scanf("%i", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++)
      printf("*");
    puts("");
  }
  for (int i = n-1; i > 0; i--) {
    for (int j = i; j > 0; j--)
      printf("*");
    puts("");
  }
  return 0;
}

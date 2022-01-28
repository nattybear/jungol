#include <stdio.h>

int main()
{
  int xs[100];
  int n;
  int cnt = 0;
  for (int i = 0; i < 100; i++) {
    scanf(" %i", &n);
    if (n == 0)
      break;
    xs[i] = n;
    cnt++;
  }
  for (int i = cnt-1; i >= 0; i--)
    printf("%i ", xs[i]);
  puts("");
  return 0;
}

#include <stdio.h>

int main()
{
  int n;
  scanf("%i", &n);
  for (int i = n; i < 100; i += n) {
    printf("%i ", i);
    if (i % 10 == 0)
      break;
  }
  puts("");
  return 0;
}

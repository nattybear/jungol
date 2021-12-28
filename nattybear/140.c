#include <stdio.h>

int main()
{
  int n;
  int sum = 0;
  int cnt = 0;
  int avg;
  for (int i = 0; i < 20; i++) {
    scanf("%i", &n);
    if (n == 0)
      break;
    sum += n;
    cnt++;
  }
  avg = sum / cnt;
  printf("%i %i\n", sum, avg);
  return 0;
}

#include <stdio.h>

int main()
{
  float scores[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
  int i, j;
  scanf("%i %i", &i, &j);
  float sum = scores[i-1] + scores[j-1];
  printf("%.1f\n",  sum);
  return 0;
}

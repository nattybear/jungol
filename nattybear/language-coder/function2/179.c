#include <stdio.h>
#include <math.h>

int round_of_avg(float arr[])
{
  float sum = 0;
  for (int i = 0; i < 3; i++)
    sum += arr[i];
  return (int)round(sum / 3);
}

int avg_of_round(float arr[])
{
  float sum = 0;
  for (int i = 0; i < 3; i++)
    sum += round(arr[i]);
  return (int)round(sum / 3);
}

int main()
{
  float arr[3];
  for (int i = 0; i < 3; i++)
    scanf(" %f", &arr[i]);
  printf("%i\n", round_of_avg(arr));
  printf("%i\n", avg_of_round(arr));
  return 0;
}

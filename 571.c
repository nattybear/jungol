#include <stdio.h>

int repeat(int i)
{
  for (int a=1; a<=i; a++) {
  puts("~!@#$^&*()_+|");
  }
  return 0;
}

int main()
{
  int a=1;
  scanf("%d" ,&a);
  repeat(a);
  return 0;
}

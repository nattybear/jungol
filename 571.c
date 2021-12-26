#include <stdio.h>

void repeat(int i)
{
  for (int a = 1; a <= i; a++)
  puts("~!@#$^&*()_+|");
 
}

int main()
{
  int a=1;
  scanf("%d" ,&a);
  repeat(a);
  return 0;
}

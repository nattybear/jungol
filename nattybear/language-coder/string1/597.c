#include <stdio.h>
#include <string.h>

int main()
{
  char s[20];
  char t[20];
  scanf("%s %s", s, t);
  printf("%li\n", strlen(s) + strlen(t));
  return 0;
}

#include <stdio.h>
#include <string.h>

void reverse(char *s)
{
  int i, len, temp;
  len = strlen(s);
  for (i = 0; i < len/2; i++) {
    temp = s[i];
    s[i] = s[len-i-1];
    s[len-i-1] = temp;
  }
}

int main()
{
  char s[100];
  int n;
  scanf("%s %i", s, &n);
  int len = strlen(s);
  if (n > len)
    n = len;
  reverse(s);
  for (int i = 0; i < n; i++)
    printf("%c", s[i]);
  puts("");
  return 0;
}

#include <stdio.h>

int main()
{
  int x = 33;
  while (1) {
    if (x < 33 || x > 127)
      break;
    printf("ASCII code =? ");
    scanf("%i", &x);
    printf("%c\n", x);
  }
  return 0;
}

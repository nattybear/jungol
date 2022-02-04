#include <stdio.h>

int main()
{
  int x = 33;
  while (1) {
    printf("ASCII code =? ");
    scanf("%i", &x);
    if (x < 33 || x > 127)
      break;
    printf("%c\n", x);
  }
  return 0;
}

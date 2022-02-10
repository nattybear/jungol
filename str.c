#include <stdio.h>

int str(char *string){
  int x = 0;
  while (string[x] != '\0'){
      ++x;
  }
  return x;

}

int main()
{
  char arr[100];
  scanf("%s" ,arr);
  printf("%d\n", str(arr));
}


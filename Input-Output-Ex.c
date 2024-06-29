#include <stdio.h>

int main(){
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);

  printf("\nEnd of input detected. EOF value is %d.", EOF);

  return 0;
}

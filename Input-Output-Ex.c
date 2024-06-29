/*read a character
   while (character is not end-of-file indicator)
     output the character just read
     read a character
*/

#include <stdio.h>

/* copy input to output */

int main(){
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);

  printf("\nEnd of input detected. EOF value is %d.", EOF);

  return 0;
}

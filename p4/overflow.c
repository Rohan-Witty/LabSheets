#include <stdio.h>

int main()
{
unsigned char count;

count = 0;
do
{
  printf("%d\n", count);
  count = count +1;
} while( count >= 0); //Repeatedly do above 2 lines till this condition is met

printf("\nValue stored in count after the loop: %d\n",count);
}

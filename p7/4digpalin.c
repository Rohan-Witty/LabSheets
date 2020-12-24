#include <stdio.h>
int main()
{
	char number[4];
	printf("Enter 4- digit number\n");
	scanf("%s", number);
	(number[0]==number[3] && number[2] == number[1])?printf("Same"):printf("Not same");
	printf(" in reverse order.\n");
	return 0;
}


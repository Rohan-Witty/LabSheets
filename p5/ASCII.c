#include <stdio.h>

int main()
{
	char a, b;
	printf("Enter two characters:\n");
	scanf("%c %c", &a, &b);

	printf("The sum of ASCII values of %c and %c is %d.\n", a, b, a+b);
	return 0;
}


#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter a and b\n");
	scanf("%d %d", &a, &b);
	int c = a;
	a= b;
	b = c;
	printf("Swapped values using 3rd variable are %d and %d\n", a,b);
	printf("Swapped values wo using 3rd variable are %d and %d\n", b, a);
	return 0;
}

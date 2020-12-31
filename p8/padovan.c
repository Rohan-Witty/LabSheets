#include <stdio.h>
int padovan(int n)
{
	if(n>=0 && n <=2)
		return 1;
	else
		return (padovan(n-2) + padovan(n-3));
}
int main()
{
	int n;
	printf("Enter number:\n");
	scanf("%d", &n);
	for(int i = 0;i<n;i++)
		printf("%d ", padovan(i));
	printf("\n");
}


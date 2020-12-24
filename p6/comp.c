#include <stdio.h>

int main()
{
	int n, cost;
	printf("Enter no of computers sold and the cost per computer\n");
	scanf("%d %d", &n, &cost);
	int bonus = 200*n;
	int comm = 0.02*n*cost;
	int gross = 1500 + bonus + comm;
	printf("Bonus = %d\n Commission = %d\n Gross Income = %d\n", bonus, comm, gross);
	return 0;
}

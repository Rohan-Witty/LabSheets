#include <stdio.h>

int main()
{
	float AvgWeight;
	int w1, n1, w2, n2;
	printf ("Weight of Item 1:	");
	scanf("%d", &w1);
	printf("No. of units of item 1:	");
	scanf("%d", &n1);

	printf ("Weight of Item 2:	");
	scanf("%d", &w2);
	printf("No. of units of item 2:	");
	scanf("%d", &n2);


	
	AvgWeight = (float)(w1*n1 +w2*n2)/(n1+n2) ;
	printf(" Average weight:	%f\n", AvgWeight);
	return 0;
}

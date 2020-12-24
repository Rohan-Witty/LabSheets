#include <stdio.h>
int main()
{
	int n;
	printf("Enter an integer\n");
	scanf("%d",&n);
	int i = 0,sum=0;
	while(i<=abs(n))
	{
		if (n<0)
			sum +=(3*n+i);
		else
			sum +=(n+i);
		i++;
	}
	printf("Required sum is %d.\n",sum);
	return 0;
}
			

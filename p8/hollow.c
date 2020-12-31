#include <stdio.h>
int main()
{
	printf("Enter number of rows:\n");
	int n;
	scanf("%d",&n);
	/*for(int i = 0; i < 2*n-1; i++)
		printf("*");
	printf("\n");*/
	for(int i = 0; i<n; i++)
	{
		for(int j= 0; j<2*n-1;j++)
			if(j==i ||j==2*n-2-i||i==0)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
		return 0;
}

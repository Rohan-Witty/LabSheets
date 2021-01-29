#include<stdio.h>
int main()
{
	int x[3][3];
	int y[3][3];
	for(int i=0; i<3;i++)
		for(int j=0; j<3; j++)
		{
			scanf("%d",&x[i][j]);
			y[j][i] = x[i][j];
		}
	for(int i =0; i<3; i++)
	{
		for(int j = 0; j<3; j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i =0; i<3; i++)
	{
		for(int j = 0; j<3; j++)
		{
			printf("%d\t",y[i][j]);
		}
		printf("\n");
	}
	return 0;
}

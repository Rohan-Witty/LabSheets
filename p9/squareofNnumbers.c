#include <stdio.h>
int main()
{
	int N=0;
	while(N<=0||N>100)
	{
		printf("Enter a number:\n");
		scanf("%d",&N);
		getchar();
	}
	int a[N];
	for (int i = 0; i<N; i++)
	{
		printf("Enter element number %d of %d:\t", i+1, N);
		scanf("%d",&a[i]);
	}
	printf("The squares of the array elements are:");
	for (int i = 0; i < N; i++)
	{
		printf("%d ",a[i]*a[i]);
	}
	return 0;
}

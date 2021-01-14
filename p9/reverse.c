#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N =-1 ;
	while(N<0)
	{
		printf("Enter N:\n");
		scanf("%d",&N);
		getchar();
	}
	int a[N];
	for(int i = 0; i <N; i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i = 0; i<N/2; i++)
	{
		int temp = a[i];
		a[i] = a[N-1-i];
		a[N-1-i] = temp;
	}
	printf("Reversed array is:\n");

	for(int i = 0; i <N; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

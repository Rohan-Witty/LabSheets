#include <stdio.h>

int digits(int number);
int armstrong(int);
int power(int,int);

int main()
{
	int n1,n2;
	printf("Enter two numbers\n");
	scanf("%d %d", &n1, &n2);
	printf("Armstrong numbers between %d and %d are:\n",n1,n2);
	for(int i = n1+1; i<n2;i++)
		if(armstrong(i))
			printf("%d ",i);
	return 0;
}
int digits(int number)
{
	int i = 0;
	while(number>0)
	{
		number/=10;
		i++;
	}
	return i;
}
int armstrong(int n)
{
	int d = digits(n);
	int x=n;
	int new=0;
	for(int i = 0; i < d; i++)
	{
		new+=power((x%10),d);
		x=x/10;
	}
	if(new==n)
		return 1;
	else
		return 0;
}
int power(int base, int index)
{
	int result=1;
	for(int i = 0; i< index; i++)
	{
		result *=base;
	}
	return result;
}


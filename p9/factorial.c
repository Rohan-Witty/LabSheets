#include <stdio.h>
long long factorial(long int);
int main()
{
	long n;
	printf("Enter a long:\n");
	scanf("%ld",&n);
	printf("Factorial of %ld is: %lld\n",n, factorial(n));
	return 0;
}
long long factorial(long a)
{
	if(a==0 || a==1)
		return 1;
	else if(a<0)
		return 0;
	else return a*factorial(a-1);
}

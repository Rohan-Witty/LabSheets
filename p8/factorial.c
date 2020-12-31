#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d", &n);
	int f =1;
	long fl =1;
	long long fll = 1;
	unsigned long long fact = 1;
	double fd = 1;
	long double fld = 1;
	for(int i = n; i>1; i--)
	{
		fact*=i;
		f*=i;
		fl*=i;
		fll*=i;
		fd*=i;
		fld*=i;
	}
	printf("unsigned long long:%llu\nlong long : %lld\nlong : %ld\nint : %d\ndouble = %lf\nlong double : %Lf",fact,fll,fl,f,fd,fld);
	return 0;
}
       	

#include <stdio.h>

int main()
{
	int a,b,c,d,l,m;
	printf("Enter 4 integers:\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(a>b)
	{
		l = a;
		m = b;
	}
	else
	{
		l=b;
		m=a;
	}
	if(c>l)
	{
		l=c;
	}
	else if(c>m)
		m=c;
	if(d>m)
		m=d;
	printf("Maximum sum given by\n %d + %d = %d\n", l, m, (l+m));
	return 0;
}
	

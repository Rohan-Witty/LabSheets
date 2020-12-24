#include <stdio.h>

int main()
{
	int d=6, i=8, j=5,a;
	float c=2.0f, x= 0.5f, y=-1.5, z;
	a = 2 * i/5 + 4 * j - 3 % i + j - 2;

	printf("a = 2 * i/5 + 4 * j - 3 mod i + j - 2; a=%d\n",a);
	
	a = (i-3*x)/(6*y + 2*j)/x-y;
	printf("a = %d\n",a);
	a=d==6;
	printf("a=%d\n",a);
	printf("%d\n",(d>3 && i > 5));
	printf("%d\n",(j<=5 || i<4));
	return 0;
}

#include <stdio.h>

int main()
{
	int a=0, b=0, x=0;
	/*x=0 && (a=b=777);*/
	/*x = 777 ||(a = ++b);*/
	x = 0 && ++a || ++b;
	printf("%d %d %d\n", x, a, b);
	return 0;
}

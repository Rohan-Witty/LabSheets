#include <stdio.h>
#include <math.h>

int main()
{
	float x, y;
	const float pi = 3.142;
	const float drad = pi/180;
	printf("Enter two floats:\n");
	scanf("%f %f", &x, &y);
	float expr1, expr2;
	expr1 = (exp(x)*sin(60*drad) + 5.6 *pow(10, -5))/(3*cos(30*drad));
	printf("%f", expr1);

	expr2 = sin((atan(0.33) + pi)/2*y);
	printf("\nexpr2 =%f\n", expr2);
	return 0;
}

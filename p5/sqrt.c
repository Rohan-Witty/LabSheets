#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, D;
	printf("Enter a, b and c in std Quadratic Equation:\n");
	scanf("%f %f %f", &a, &b, &c);
	D = b*b - 4*a*c;
	printf("D is %f\n", D);
	if ( D < 0)
	{
		if(a<0)
		{
			a= -a;
			b = -b;
			c = -c;
		}
		printf("The roots are %f+i%f and %f-i%f\n", -b/(2*a),((-D)/(2*a)),-b/(2*a),(sqrt(-D)/(2*a)));
		return 0;
	}
	printf("The roots are %f and %f\n", (-b + sqrt(D))/(2*a), (-b - sqrt(D))/(2*a));
	return 0;
}	

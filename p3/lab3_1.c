#include <stdio.h>
int main()
{
	int x, y;
	float a, b, prod;
	printf("Enter value of a: ");
	scanf("%f", &a); // Reading user input of variable a
	printf("Enter value of b: ");
	scanf("%f", &b); // Reading user input of variable b
	prod = a * b;
	printf("Enter value of x and y\n");
	scanf("%d%d", &x, &y); //Reading values of two variables using scanf
	printf("Product of %f and %f is: %f\n", a, b, prod);
	printf("Product of %d and %d is: %d\n", x, y, x*y);//Printing the product of twof numbers without storing the result in any variable
	return 0;
}

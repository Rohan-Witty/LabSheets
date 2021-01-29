#include<stdio.h>
void circleData(float *r, float *p, float *a);
int main()
{
	float radius, perimeter, area;
	printf("Enter the radius:");
	scanf("%f", &radius);
	circleData(&radius, &perimeter, &area);
	printf("Perimeter:%f\nArea:%f\n", perimeter, area);
	return 0;
}
void circleData(float *r, float *p, float *a)
{
	*p = (*r)*2*3.1415;
       *a = 3.1415*(*r)*(*r);
}       

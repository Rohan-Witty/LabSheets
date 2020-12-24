#include <stdio.h>

int main()
{
	float f;
	printf("Sizeof (s char) = %lu bytes\n", sizeof(signed char));
	printf("Sizeof (s short) = %lu bytes\n", sizeof(signed short int));
	printf("Sizeof (s int) = %lu bytes\n", sizeof(signed int));
	printf("Sizeof (long long) = %lu bytes\n", sizeof(long long));
	
	printf("Sizeof (long ) = %lu bytes\n", sizeof(long ));
	
	printf("Sizeof (u float) = %lu bytes\n", sizeof(float));
	printf("Sizeof (u double) = %lu bytes\n", sizeof( double));

	printf("Sizeof (u 1.55) = %lu bytes\n", sizeof( (1.55)));
	printf("Sizeof (u 1.55L) = %lu bytes\n", sizeof( (1.55L)));
	printf("Sizeof (u str) = %lu bytes\n", sizeof( ("Hello")));
	return 0;
}


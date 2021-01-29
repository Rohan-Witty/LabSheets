#include<stdio.h>
#include <stdlib.h>
void foo(int arr[]);
int main()
{
	int arr[] = {10,20,45,67,68};
	printf("Sizeof(arr) = %lu\n", sizeof(arr));
	foo(arr);
	return 0;
}
void foo(int arr[])
{
	printf("Sizeof(arr) = %lu\n", sizeof(arr));
}


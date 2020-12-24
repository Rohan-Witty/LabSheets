#include <stdio.h>
#include <math.h>
int power(int base, int index);

int main()
{
	int rad, N, new = 0;
	printf("Enter decimal number and radix:\n");
	scanf("%d %d", &N, &rad);
	printf("The number %d in radix %d is", N, rad);
	int i = 0;
	while (N>0)
	{
		new = new + (N%rad) *(int) pow((double)10,(double)i);
		N = N/rad;
		i++;
	}
	printf(" %d.\n", new);
	return 0;
}
int power(int base, int index)
{
	int answer=1;
	for (int i=0; i<index; i++)
	{
		answer = answer * base;
	}
	return answer;
}

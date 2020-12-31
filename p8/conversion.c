#include <stdio.h>
int power (int base, int index);
int main()
{
	char c;
	int n, i, rem;
	while(1)
	{
		char c;
		i=0;
		rem=0;
		printf("Enter option and number:\n");
		scanf("%c %d", &c,&n);
		getchar();
		switch(c)
		{
			case 'b':
				printf("The given number is in binary, its decimal equivalent is:");
				i = 0;
				while(n)
				{
					rem += (n%10)*power(2,i);
					n/=10;
					i++;
				}
				printf("%d\n",rem);	
				break;
			case'd':
				printf("The given number is in decimal, its binary equivalent is:");
				i = 0;
				while(n)
				{
					rem += (n%2)*power(10,i);
					n/=2;
					i++;
				}
				printf("%d\n",rem);	
				break;
			case 'x':
				return 0;
			default:
				printf("Not a valid option\n");
				break;
		}
	}
}
int power (int base, int index)
{
	int result = 1;
	for(int i = 0; i< index; i ++)
	{
		result *= base;
	}
	return result;
}


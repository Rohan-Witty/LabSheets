#include <stdio.h>
#include <string.h>
int itobin(int x);

int main()
{
	char a[100];
	printf("Enter no:\n");
	scanf("%s",a);
	int integral=0, decimal=0;
	int d=0,s=0;
	for(int i = 0; i< strlen(a);i++)
	{
		if(a[i] == '-')
		{
			s=1;
			i++;
		}
		else if(a[i] = '+')
		{
			i++;
		}
		if(a[i] == '.')
		{
			d = 1;
			i++;
		}
		if(d)
			decimal = 10*decimal + ((int)a[i] - '0');
		else
			integral = 10*integral + ((int)a[i]-'0');
	}
	printf("Integral part = %d\nDecimal Part = 0.%d\nBinary Decimal Part = %d\n",integral,decimal,itobin(decimal));
	
	return 0;
}
int itobin(int x)
{
	int multiplier = 1, y = 0;
	while(x)
	{
		y = x%2 * multiplier + y;
		multiplier *=10;
		x=x/2;
	}
	return x;

}


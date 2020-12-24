#include <stdio.h>
#include <math.h>

double binary(double decimal);
double printIEEE(double bin);
int main()
{
	printf("Enter a binary number:\n");
	double num;
	scanf("%lf",&num);
	double bin = binary(num);
	printf("%lf\n",bin);
	
	double I = printIEEE(bin);
	return 0;
}
double binary(double decimal)
{
	int integer = (int) decimal;
	int x = 0;
	int j = 0;
	while(integer >0)
	{
		x = x + (integer %2) * pow((double)10,(double)j);;
		integer = integer/2;
		j++;
	}
	decimal = decimal - (int) decimal;
	double y = 0;
	int i = 1;
	while (decimal>0)
	{
		decimal = 2*decimal;
		y = y +(double) ((int) (decimal))/pow((double)10,(double)i);
		i++;
		decimal = decimal -(int)decimal;
	}
	return (x+y);
}

double printIEEE(double bin)
{
	int power = 0;
	int s = (bin>=0)?0:1;
	if(s)
		bin = -bin;
	while((bin>=10) || (bin<1))
	{
		if(bin >= 10)
		{
			bin = bin/10.0;
			power ++;
		}
		else if (bin < 1)
		{
			bin = 10*bin;
			power --;
		}
	}
	printf("Number : %lf \n Power: %d",bin, power); 
	int e = (int)binary((double)power);
	bin = bin - 1;
	for (int i=0; i<23; i++)
	{
		bin*=10;
		if((int)bin%10 != 0 && (int)bin%10 != 1)
		{
			bin = bin - (int)bin%10;
		}	
		
	}

	long long m = (long long)(bin);
	printf("%d %08d %023Ld",s,e,m);
}



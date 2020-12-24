#include <stdio.h>

int main()
{
	char op;
	printf("Enter two operands:\n");
	int result, x,y;
	scanf("%d %d", &x, &y);
	getchar();
	printf("Enter operator:\n");
	scanf("%c",&op);
	if(op=='+')
		result = x+y;
	else if(op == '-')
		result = x-y;
	else if(op == '*')
		result = x*y;
	else if(op == '/')
	{
		if(y==0)
		{
			printf("divided by zero\n");
			return 0;
		}
		else;
		result=x/y;
	}
	else if(op == '%')
	{
		if(y==0)
		{
			printf("divided by zero\n");
			return 0;
		}
		else;	
		result = x%y;
	}
	else
	{
		printf("Invalid operator\n");
		return 0;
	}
	
	printf("%d%c%d = %d\n",x,op,y,result);
	return 0;
}

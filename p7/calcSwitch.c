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
	switch(op)
	{
		case '+':
			result = x+y;
			break;
		case '-':
			result = x-y;
			break;
		case '*':
			result = x*y;
			break;
		case '/':
			if(y==0)
			{
				printf("divided by zero\n");
				return 0;
			}
			else;
			result=x/y;
			break;
		case '%':
			if(y==0)
			{
				printf("divided by zero\n");
				return 0;
			}
			else;	
			result = x%y;
			break;
		default:
			printf("Invalid operator\n");
			return 0;
	}
	
	printf("%d%c%d = %d\n",x,op,y,result);
	return 0;
}

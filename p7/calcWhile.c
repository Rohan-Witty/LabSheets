#include <stdio.h>

int main()
{
	char op;
	
	int result, x,y;
	int status=1;
	while(status)
	{
	printf("Enter two operands\n");
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
				status = 0;
			}
			else
			result=x/y;
			break;
		case '%':
			if(y==0)
			{
				printf("divided by zero\n");
				status = 0;
			}
			else	
			result = x%y;
			break;
		default:
			printf("Invalid operator\n");
			status = 0;
	}
	if(status)
	{
	printf("%d%c%d = %d\n",x,op,y,result);
	printf("Do you want to continue(1,0)?\n");
	scanf("%d",&status);
	}
	else
		status = 1;
	}
	return 0;
}

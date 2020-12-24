#include <stdio.h>
int main()
{
	int month;
	printf("Enter Month number(1-12):\n");
	scanf("%d",&month);
	int q = month /3;
	q=(month==12)?0:q;
	switch(q)
	{
		case  1:
			printf("Spring\n");
			break;
		case 2:
			printf("Summer\n");
			break;
		case 3:
			printf("Autumn\n");
			break;
		case 0:
			printf("Winter\n");
			break;
		default:
			printf("Not a valid month\n");
			break;
	}
	return 0;
}

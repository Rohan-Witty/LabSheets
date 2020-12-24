#include <stdio.h>
int main()
{
	char ch = 'A';
	float flt = 10.234;
	int no = 150;
	printf("Character is %c \n", ch);
	scanf("%c", &ch);
	printf("Character is %c \n", ch);
	printf("Float value is %f \n", flt);
	scanf("%f", &flt);
	printf("Float value is %f \n", flt);
	printf("Integer value is %d \n", no);
	scanf("%d", &no);
	printf("Integer value is %d \n", no);
	return 0;
}

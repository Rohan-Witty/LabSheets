#include<stdio.h>
#include<string.h>

int main()
{
	printf("Input Text: ");
	char big[2000];
	scanf("%[^\n]",big);
	getchar();
	int count = 0;
	printf("Search String: ");
	char small[20];
	scanf("%[^\n]",small); 

	char *place = big;
	while(strstr(place,small))
	{
		count++;
		place = strstr(place,small);
		place++;
	}
	printf("Count is %d\n", count);
	return  0;
}

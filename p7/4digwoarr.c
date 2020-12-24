#include <stdio.h>
int main()
{
	int num=0, rev=0;
	while(num<1000 ||num >9999)
	{
		printf("Enter 4-digit number\n");
		scanf("%d",&num);
	}
	int x = num;
	for(; x>0;)
	{
		rev = 10*rev+x%10;
		x=x/10;
	}
	(num==rev)?printf("Same\n"):printf("Not Same\n"); 	return 0;
}

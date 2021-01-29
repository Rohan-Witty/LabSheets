#include<stdio.h>
int main()
{
	char str1[41], str2[11];
	printf("Enter the string 1: ");
	int l1=0, l2=0;
	//l1=scanf("%s", str1);

	
	//l2=scanf("%s", str2);
	int i ;
	for( i =0; i<41 ; i ++)
	{
		str1[i] = getchar();
		if (str1[i] == '\n')
		{	
			str1[i] ='\0';
			l1=i;
			break;
		}
	}
	printf("Enter the string 2: ");
	i=0;	
	for( i =0; i<11; i ++)
	{
		str2[i] = getchar();
		if (str2[i] == '\n')
		{
			str2[i] = '\0';
			l2=i;
			break;
		}
	}
	
	int test = 0;
	int j = 0;
	int sub = 0;
	for(i = 0; i<l1; i++)
	{
		if(str1[i] == str2[j])
		{
			j++;
			test = 1;
		}
		else
		{
			test = 0;
			j = 0;
		}
		if (test && j==l2)
		{
			sub =1;
			break;
	
		}
	}
	if(sub)
		printf("YES, %s is present as the substring in %s\n", str2, str1);
	else
		printf("NO, str1 = %s, str 2 = %s, test = %d, sub = %d, j = %d, l1 = %d, l2= %d\n",str1, str2,test,sub,j, l1, l2);
	return 0;
}

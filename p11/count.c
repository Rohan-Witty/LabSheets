#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char string[50];
	printf("Enter a string:\n");
	scanf("%[^\n]",string);
	int v,c,d, other;
	char ch;
	for(int i = v=c=d=other=0, l= strlen(string); i<l; i++)
	{
		ch = tolower(string[i]);
		if(isalpha(ch))
		{
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			{
				v++;
			}
			else
			c++;
		}
		else if(isdigit(ch))
			d++;
		else
			other ++;
	}
	
	printf("Vowels = %d, consonants = %d, Digits= %d, Other = %d\n",v,c,d,other);
}

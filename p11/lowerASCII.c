#include <stdio.h>
void convertLower(char *);
int main()
{
	char string[50];
	printf("Enter a string:\t");
	scanf("%s", string);
	convertLower(string);
	printf("The string in lower case is:\t%s\n",string);
	return 0;
}
void convertLower(char *s)
{
	if(*s != '\0')
	{
		if(*s>='A' && *s<='Z')
			*s += 'a'-'A';
		s++;
		convertLower(s);
	}
}

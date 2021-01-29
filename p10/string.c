#include <stdio.h>
int main()
{
	char arr[21];
	int i = 0;
	char c;
	printf("Enter the string of capital letters: ");
	while(i<20 && '\n'!=(c=getchar()))
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	
	for (int i = 0; arr[i]!='\0'; i++)
		putchar(arr[i]);
	//Starting 2 b part of counting
	int count[26] = {0,0,0};
	for(int i = 0; i<26; i++);
	for(int i = 0; arr[i] !='\0';i++)
		count[(int)arr[i]-(int)'A'] ++;
	printf("Number of Occurrences: ");
	for (int i = 0; i<26; i++)
		if(count[i]!=0)
		printf("%c:%d  ",i+'A',count[i]);
	printf("\n");	
	return 0;
}

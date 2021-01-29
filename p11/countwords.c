#include<stdio.h>
int isSame(char [], char[]);
int main()
{
	char sentence[10][10];
	int i = 0, j=0;
	char c;
	while(c=getchar(), c!='\n')
	{
		if(c==' ')
		{
			sentence[i][j] = '\0';	
			i++;
			j=0;
		}
		else
		{
			sentence[i][j] = c;
			j++;
		}
	}
	sentence[i][j] = '\0';
	for(int count = 0; count <=i; count++)
	{
		printf("%s ", sentence[count]);
	}
	printf("\n");
	char word[10];
	scanf("%s",word);
	int number = 0;
	for(int count = 0; count <=i; count++)
	{
		if(isSame(word,sentence[count]))
		{
			number++;
			sentence[count][0] ='\0';
		}
	}
	printf("Number of times the word %s occurs is %d\nThe string without %s is:\n",word, number,word); 
	for(int count = 0; count <= i; count ++)
	{
		if(sentence[count][0] !='\0')
		printf("%s ",sentence[count]);
	}
	return 0;
}
int isSame(char S1[], char S2[])
{
	if(S1[0] != S2[0])
	{
		return 0;
	}
	if(S1[0] =='\0' && S2[0]=='\0')
	{
		return 1;
	}
	if(S1[0] == S2[0])
		return isSame(S1+1,S2+1);
}
	

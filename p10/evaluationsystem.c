#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of questions (Q): ");
	scanf("%d", &n);

	char key[n];
	printf("Input key to the quiz:\nKeys = ");

	scanf("%s",key);
	int status = 1;
	while(status)
	{
		printf("Input name of student:\t");
		char name[20];
		scanf("%s",name);
		printf("Input response of %s:\n",name);
		char response[n];
		scanf("%s", response);
		while(getchar()!='\n');
		int score = 0;
		for(int i = 0; i < n; i++)
			if(key[i]==response[i])
				score++;
		printf("Marks obtained by %s is = %d out of %d\n", name, score,n);

		while(1)
		{
			printf("Do you want to evaluate another student (Y/N):\t");
			char c = getchar();
			if (c == 'Y')
				break;
			else if (c == 'N')
			{
			       	status = 0;
				break;
			}
			else
			{
				printf("Invalid input\n");
				continue;		
			}
		}
	}
	printf("Good Bye!\n");
	return 0;
}

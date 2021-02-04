#include<stdio.h>
#include<string.h>

typedef struct{
	char fname[70]; /* first name (a single word) */
	int freq; /* how many people in the sample population have this name */ 
	int len; /* stores the length of the name */
} NAME;

void getData(NAME arr[], int n);
float findPercent(NAME arr[], int treshold,int n);

int main()
{
	int N;
	printf("Enter number of individuals\n");
	scanf("%d",&N);//Read number and spaces
	int tresh;
	scanf("%d",&tresh);
	getchar();//For whitespace
	NAME array[N];
	getData(array,N);
	printf("Percentage of people with names longer than treshold %d is %f\n",tresh, findPercent(array,tresh,N));
	return 0;
}
void getData(NAME arr[], int n)
{
	for(int i = 0; i<n; i++)
	{
		scanf("%s%d",arr[i].fname,&arr[i].freq);
		getchar();
		arr[i].len = strlen(arr[i].fname);
	}
}

float findPercent(NAME arr[], int treshold,int n)
{
	float count_total=0, count = 0;
	for(int i = 0; i<n; i++)
	{
		count_total += arr[i].freq;
		if(arr[i].len > treshold)
		count = count + arr[i].freq;
	}
	return (count/count_total);
}	

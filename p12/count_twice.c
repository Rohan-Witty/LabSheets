#include<stdio.h>

int recursive_search(int a[], int n, int num);
int tern_rec_search(int a[], int n, int num);


int count_lin_search = 0;
int count_t=0;
int main()
{
	int n;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	getchar();
	int array[n];
	printf("Enter array elements:\n");
	for(int i = 0; i<n; i++)
	{
		scanf("%d",&array[i]);
		getchar();
	}
	printf("Enter element to be searched:");
	int t;
	scanf("%d",&t);
	int pos = recursive_search(array,n,t);
	printf("\nLinear Search\n");
	if (pos<n) printf("Number present at position %d\n",pos+1);
	else printf("Number not present\n");
	printf("Function was called %d times\n", count_lin_search);
	
	pos = tern_rec_search(array, n, t);

	printf("\nTernary Search\n");
	if (pos>-1) printf("Number present at position %d\n",pos+1);
	else printf("Number not present\n");
	printf("Function was called %d times\n", count_t);
	return 0;
}
int recursive_search(int a[], int n, int num)
{
	if(a[count_lin_search] > num)
	{
		count_lin_search ++;
		return n;
	}
	else if(a[count_lin_search] == num)
	{
		count_lin_search ++;
		return count_lin_search-1;
	}
	else
	{
		count_lin_search ++;
		return recursive_search(a, n, num);
	}
}


int tern_rec_search(int a[], int n, int num)
{
	count_t ++;
	if(a[0]>num || a[n-1]<num)
	{
		return -1;
	}

	for(int t=1; t<4; t++)
	{
		if(a[(t*n)/3 - 1] == num)
		{
			return ((t*n)/3 - 1);
		}
		if(a[(t*n)/3 - 1] > num)
		{
			int x = tern_rec_search(&a[((t-1)*n)/3], (n)/3 +1 ,num);
			if(x<0)
				return x;
			else
				return ((t-1)*n)/3 + x;
		}	
	}
		
}

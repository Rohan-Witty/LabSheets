#include<stdio.h>
void function1(int l,int twoD[][l]);
void function2(int l,int *(m[l]));
int main()
{
	printf("Enter Order of matrix\n");
	int n = 0;
	scanf("%d", &n);
	int matrix[n][n];
	printf("Enter Elements of the Matrix:\n");
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
			scanf("%d", &matrix[i][j]);
	}
	function1(n,matrix);
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
			printf("%d\t",matrix[i][j]);
		printf("\n");
	}
	function2(n,(int**)matrix);
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
			printf("%d\t",matrix[i][j]);
		printf("\n");
	}
	return 0;
}
void function1(int l, int twoD[][l])
{
	for(int i = 0; i < l; i++)
		for(int j = i+1; j<l; j++)
		{
			int temp = twoD[i][j];
			twoD[i][j] = twoD[j][i];
			twoD[j][i]= temp;
		}
}
void function2(int l,int **m)
{
	//function1(l,m);
	int *p =(int *) m;
	for(int i = 0; i<l; i++)
	{
		for(int j = i+1; j<l;j++)
		{
			int temp = *(p+l*i+j);
			*(p+l*i+j) = *(p+l*j+i);
			*(p+l*j+i) = temp;
			/*int temp = m[i][j];
			m[i][j] = m[j][i];
			m[j][i] = temp;*/
		}
	}
}

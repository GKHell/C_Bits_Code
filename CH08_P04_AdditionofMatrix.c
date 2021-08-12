

#include<stdio.h>
int main()
{
	int a[10][10];
	int b[10][10];
	int c[10][10];
	int i,j;
	int n,m;
	printf("Enter rows & column : ");
	scanf("%d,%d",&n,&m);

	printf("Enter the matrix  A : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the matrix  B : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n----------------------\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d   ",c[i][j]);
		}
		printf("\n");
	}
}
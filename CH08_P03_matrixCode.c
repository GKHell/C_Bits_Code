

#include<stdio.h>
int main()
{
	int a[10][10];
	int i,j;
	int n,m;
	printf("Enter rows & column : ");
	scanf("%d,%d",&n,&m);

	printf("Enter the matrix : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n----------------------\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d   ",a[i][j]);
		}
		printf("\n");
	}
}
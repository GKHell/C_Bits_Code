
#include<stdio.h>
int main()
{
	int a[10][10][10];
	int i,j,k;
	int n,m,o;
	int counter=0;
	printf("Enter n,m,o : ");
	scanf("%d,%d,%d",&n,&m,&o);

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<o;k++)
			{
				a[i][j][k] = ++counter;
			}
		}
	}


	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<o;k++)
			{
				printf("%2d   ",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}

	// printf("%d ",a[3][1][2]);
}

/**
 *  [1][0][2]
 * 
 * 	5 3 2
 *  4 4 2
 * 
 * 
 * 	5 3 x
 *  4 4 2
 * 
 * 
 * 	5 3 2
 *  4 4 2
 * 
 * */
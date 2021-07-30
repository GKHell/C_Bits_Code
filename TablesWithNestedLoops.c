
#include<stdio.h>
int main()
{

	int i,n;


	for(i=5;i<=10;i++)
		printf("+-%2s---%2s---%2s--","--","--","--");

	printf("+\n");
		for(i=1;i<=10;i++)
		{
			for(n = 1;n<=6;n++)
			{
				printf("| %2d x %2d = %2d  ",n,i,n*i);
			}
			printf("|");
			printf("\n");
		}

	for(i=5;i<=10;i++)
		printf("+-%2s---%2s---%2s--","--","--","--");

	printf("+\n");
}
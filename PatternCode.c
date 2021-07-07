
#include<stdio.h>
void main()
{
	int i,j,n=20;

	for(i=0;;i++) // no of rows
	{
		for(j=0;j<n;j++) // no of columns
		{
			if(i!=j || j%3!=0 || i%5==0)
				printf(" __❤    ");
			else
				printf("_❤   ");
		}
		printf(" ");
	}
}
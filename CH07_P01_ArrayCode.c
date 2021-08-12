
#include<stdio.h>
int main()
{

	int a[100];
	int i,n,counter=0,sum=1;

	printf("Enter the size :  ");
	scanf("%d",&n);

	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		printf("a [ %d ] = ",i);
		scanf("%d",&a[i]);
		// a[i] = ++counter;
	}

	printf("---------------------\n");

	for(i=0;i<n;i++)
	{
		sum*=a[i];
		printf("a [ %d ] = %d \t %d\n",i,a[i],sum);
	 
	}
	printf("total : %d\n",sum);
}
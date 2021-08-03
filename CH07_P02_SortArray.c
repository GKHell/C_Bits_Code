
#include<stdio.h>
int a[100];
int i,n,temp,j;

 void print_array()
 {
 	int k;
 	printf(" { | ");
  for(k=0;k<n;k++)
	{
		 
		printf(" %2d |",a[k]);
	 
	}
 printf(" }\n");

 }
int main()
{
	
	printf("Enter the size :  ");
	scanf("%d",&n);

	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		printf("a [ %d ] = ",i);
		scanf("%d",&a[i]);
		 
	}
	//
		for(i=0;i<n;i++)
		{

				print_array(a);

			for(j=i+1;j<n;j++)
			{

				if(a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
			
				

		}

	//
	printf("---------------------\n");

	for(i=0;i<n;i++)
	{
		 
		printf("a [ %d ] = %d \n",i,a[i]);
	 
	}
}
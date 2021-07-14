

#include<stdio.h>
void main()
{
	int a,b;

	printf("Enter value for a : ");
	scanf("%d",&a);

	printf("Enter value for b : ");
	scanf("%d",&b);

	// printf("%d > %d = %d \n",a,b,(a>b));
	if(a>b)
	{
		printf("%d is greater than %d\n",a,b);
	}
	else
	{
		printf("%d is  greater than %d\n",b,a);
	}

/////////////
}
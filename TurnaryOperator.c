

#include<stdio.h>
int main()
{

	int a,b,max;
	printf("Enter 2 numbers : ");
	scanf("%d,%d",&a,&b);

	max = (a<b)?b:a;

	printf("max : %d\n",max);


}
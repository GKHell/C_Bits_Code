
#include<stdio.h>
int main()
{
	int a,b,c;
	int max;
	printf("Enter 3 numbers : ");
	scanf("%d,%d,%d",&a,&b,&c);

	if(a>b)
		if(a>c)
			max = a;
		else
			max = c;
	else//////////
		if(b>c)
			max = b;
		else
			max = c;
//----------------------
	if(a>b && a>c)
		max = a;
	else if(b>a && b>c)
		max = b;
	else
		max = c;

	printf("maximum is %d\n",max);
}

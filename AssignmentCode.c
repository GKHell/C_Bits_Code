
#include<stdio.h>
int main()
{
	int a=10,b=3;

	// a = a+b;
	a+=b; // a = a+b
	printf("After += %d\n",a); 

	a-=b; // a = a-b;
	printf("After -= %d\n",a);

	a*=b; // a = a*b
	printf("After *= %d\n",a);

	a<<=b; // a = a<<b;
	/*
		c = a*2^b
		  = 30*2^3
		  = 240
	*/
	printf("After <<= %d\n",a);

	return 0;
}
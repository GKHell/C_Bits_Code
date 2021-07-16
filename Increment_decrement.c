
#include<stdio.h>
// ++x : prefix
// x++ : postfix
int main()
{
	int i=10;

	// increment 
	// 1. post increment 

	printf("during post increment : %d\n",i++); // 10
	printf(" after post increment : %d\n",i);   // 11

	// 2 pre increment
	printf("\n");
	printf(" during pre increment : %d\n",++i); // 12 
	printf("  after pre increment : %d\n",i); // 12

	printf("\n-------------------------------\n\n");

	// decrement 
	// 1. post decrement
	printf("during post decrement : %d\n",i--);// 12
	printf(" after post decrement : %d\n",i); // 11

	printf("\n");
	printf(" during pre decrement : %d\n",--i);//10
	printf("  after pre decrement : %d\n",i);//10

	i++,printf("\n\n%d\n",i);//i+1

 }
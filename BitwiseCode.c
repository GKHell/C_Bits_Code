
#include<stdio.h>
int main()
{

	int a = 7,b = 3,c;

	// bitwise AND (&)
	/*
		8 4 2 1
	--------------
	7=> 0 1 1 1
	3=> 0 0 1 1
	--------------
	&=> 0 0 1 1 => 3

	*/
	c = a & b;
	printf("%d & %d = %d \n",a,b,c);

	// bitwise Or(|)
	/*
		8 4 2 1
	--------------
	7=> 0 1 1 1
	3=> 0 0 1 1
	------------
	|=> 0 1 1 1 => 7

	*/
	c = a | b;
	printf("%d | %d = %d \n",a,b,c);

	// bitwise Ex-Or : if both are same then '0' else '1'
	/*
		8 4 2 1
	--------------
	7=> 0 1 1 1
	3=> 0 0 1 1
	------------
	^=> 0 1 0 0 => 4
	*/
	c = a ^ b;
	printf("%d ^ %d = %d \n",a,b,c);

	a = -5;
	// bitwise negation :
	/*
		c = -(a+1)
		  = -(-5+1)
		  = -(-4)
		  = 4
	*/
	c = ~a;
	printf("~%d  = %d  \n",a,c);


}
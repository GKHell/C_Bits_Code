
#include<stdio.h>
int main()
{
	int a=10,b=3,c=2;

	int *p = &b;
	printf("address of a : %u\n",&b);
	printf("address of a : %u\n",p); //address

	printf("data : %d\n",b);
	printf("data : %d\n",*p); //data

	printf("sizeof : %c\n",sizeof(char));
}


#include<stdio.h>
int main()
{

	int i = 'Z';

	while(i>='A')
	{
		printf("%d : %c\n",i,i);
		i--;
	}

	i = 100;
	while(i<=10)
	{
		printf("Hello World %d\n",i);
		i++;
	}
}
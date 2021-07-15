// 
/*

	LOgical AND
	logical Or
	logical NOT

*/
#include<stdio.h>
int main()
{

	int a = 10,b = 4,c = 11;

	// printf("status : \n",);
	if(a>= b && c==b) //if both exp are true then it's true
	{
		printf("AND True....\n" );
	}
	else
	{
		printf("AND False....\n" );
	}
	printf("=======================================\n");

	if(a<b || a!=c)
	{
		printf("OR : True\n");
	}
	else
	{
		printf("OR : False\n");

	}
	printf("=======================================\n");
	if(!!!(a>b))
	{
		printf("NOT : True(its means in real it is false)\n");
	}
	else
	{
		printf("NOT : False(its means in real it is True)\n");

	}

	return 130;
}
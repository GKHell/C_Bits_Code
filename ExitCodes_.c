
// break,continue,
// return used to exit the function,
// exit used to exit program
// goto[backward , forward]
#include<stdio.h>
#include<stdlib.h>

int code()
{

	printf("Line 1\n");
		// return 29;
		// exit(0);
	printf("line 2\n");
}
int main()
{
	int n;

	for(n=1;n<=10;n++)
	{
		if(n != 5)
			continue; //break
		printf("data : %d\n",n);
	}
	code();
	printf("other statement .....");

	printf("\n--------------------\n");

n =1;
	printf("line 1\n");
	printf("line 2\n");
	printf("line 3\n");
me:
	printf("\tline 4 : %d\n",n);
	printf("line 5\n");
	printf("line 6\n");
	printf("line 7\n");
n++;
	if(n<=10)
	{
		goto me;
	}
	printf("line 8\n");
	printf("line 9\n");
	printf("line 10\n");



}
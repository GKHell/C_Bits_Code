
#include<stdio.h>
void main()
{
	enum day{mon,tue,wed=52,thur,fri,sat=30,sun};
	//clrscr();
	
	// mon = 5; // error bcz all are constants
	printf("   Monday : %d\n", mon);
	printf("  Tuesday : %d\n", tue);
	printf("Wednesday : %d\n", wed);
	printf(" Thursday : %d\n", thur);
	printf("   Friday : %d\n", fri);
	printf(" Saturday : %d\n", sat);
	printf("   sunday : %d\n", sun);

//getch();
}

// write a function to get the sum of 2 number
/*
	this program done by divansu.. //documentation section
*/

#include<stdio.h> // link section
#include<math.h> // link section

#define A 10 // definition section
#define B 30 // definition section

 int i = 0; // global section

void sum() //user-define section
{
	printf("line %d : %d + %d = %d\n",++i,A,B,A+B);
}
void sub() //user-define section
{
	printf("line %d : %d - %d = %d\n",++i,A,B,A-B);
};;;;;;;
void main() // main function
{
	//clrscr();
		sum();sub();sub();sum();
		     sum();;;;;;;;;;;;
		i = 199;
		printf("value of i : %d\n",i);
		// A = 300;
		// B = 200;
		#undef A 
		#undef B
			#define A 300
			#define B 200
		printf("A : %d\t B : %d\n",A,B);
	//getch();
};;;;;;;;;;;;;;;;;;







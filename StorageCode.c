//     auto : local
// register : local
//   extern : global
//   static : local,global 
#include<stdio.h>
extern int e=10;
static int s;


void main()
{
	 auto int a;
	 register int r;

	// clrscr();

	 	printf("    auto : %d\n",a);
	 	printf("register : %d\n",r);
	 	printf("  extern : %d\n",e);
	 	printf("  static : %d\n",s);
	// getch();
}
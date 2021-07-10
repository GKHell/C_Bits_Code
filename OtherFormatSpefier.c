
#include<stdio.h>
int main()
{

	int oct = 0013;
	// float x = 234.33e+4;
	// printf("%2.3E x\n",234.33e+4);
	// printf("%10e x\n",34.25e1);

	printf("--------------Octal--[base 8]-------------\n");
	printf("%d : %o\n",oct,oct); // prefix '00'defines octal
	/*
		 8^2	8^1 	8^0
	---------------------
		   64   8        1 
		   	1	2        5
		   ------------------
		   	64+ 16 + 5 = 85

	*/

	printf("-----------Hexa-decimal--[base 16]--------\n");
	printf("%d : %x \n",0x3a4,0x3a4);
	/*
				16^1	16^0
				--------------
				  16     1
 				   3     4
 				------------
 				  48 + 4 = 52

	*/

	printf("Hello %s\n","Python");
 // 2^3 2^2  2^1  2^0

 // 8    4    2    1 
}

#include<stdio.h>
#include<math.h>
int main()
{

	//1 byte : 8 bits
	// //4 byte : 32 bits : 32 binary digits
	long int size,range,x;
	printf("size (int) : %d\n",sizeof(int));

	size = sizeof(int);

	size = 2; // manually for int : 2 byte
	x = size*2;
	range = pow(16,x);
	printf("range : 0 - %ld\n",range-1);

	printf("-ve range : %ld\n",range/2*(-1));
	printf("+ve range : %ld\n",range/2-1);

	 

}


// 8 4 2 1
// -------
// 1 1 1 1

/*
52

 128  64  32	16	 8	4	2	1
   ---------------------------
  1   1   1     1    1  1   1   1    

*/

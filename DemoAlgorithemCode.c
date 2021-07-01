
/*
		step 1 : start
		step 2 : input x,y
		step 3 : ans = 1
		step 4 : repeat while y>=1
				 ans = ans*x
				 y=y-1
		step 5 : output ans
		step 6 : end
*/
////////////////

/* x = 2 , y = 3
	ans = 1 (ans = ans*x)           y(y--)
	  2									3
	  4									2
	  8									1
*/
#include<stdio.h>
// #include<conio.h>
void main()
{
		int x,y,temp;
		int ans = 1;
		char ch;
	// clrscr();
		printf("Enter equation : ");
		scanf("%d%c%d",&x,&ch,&y);
		temp = y;
		// while(y>=1)
		// {
		// 	ans = ans*x;
		// 	y--; //y=y-1
		// }

		for(;y>=1;y--) // exp1;exp2;exp3
		{
			ans = ans*x;
		}
		printf("%d^%d =  %d\n",x,temp,ans);

	// getch();
}



// step 1: start
// step 2: input num
// step 3: set flag = 1
// step 4: i = 2
// step 5: repeat while i is less then or equals num/2 
// 		if num % i == 0:
// 			flag = 0
// 			break
// 		i = i+1 
// step 6 : if flag == 1 then
// 			output  "num is prime"
// 		else
// 			output  "num is not prime"
// step 7: stop

#include<stdio.h>
// #include<conio.h>
void main()
{
	int num,flag=1,i=2,j=0;
	// clrscr();
	printf("Enter the number : ");
	scanf("%d",&num);
	while(i<=num/2)
	{
		j++;
		if(num%i==0)
		{
			flag = 0 ;
			break;
		}
		i++;
	}
	printf("number of iteration : %d\n",j);
	if(flag ==1)
	{
		printf("%d is prime ....",num);
	}
	else
	{
		printf("%d is not prime ....",num);
	}
	// getch();
}
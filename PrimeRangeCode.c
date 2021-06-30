
#include<stdio.h>
int main()
{
		int start,stop,flag=1,i,j,num;
		int temp;
	// clrscr();

	printf("Enter the start & stop point : ");
	scanf("%d,%d",&start,&stop);
	if(start>stop)
	{
		temp = start;
		start = stop;
		stop = temp;	
	}
	for(j=start;j<=stop;j++)
	{
		num = j;
		i=2;
		flag = 1;
		while(i<=num/2)
		{
			if(num%i==0)
				{
					flag = 0 ;
					break;
				}
			i++;
		}
		if(flag == 1)
		{
			printf("%d \n",num);
		}
		
	} 
	// getch();
}
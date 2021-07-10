
#include<stdio.h>
int main()
{

	 long int data[100];
	 int n,i,max,id;

	 printf("Enter no of customers : ");
	 scanf("%d",&n);

	 printf("Enter the loan  ammount : \n");
	 for(i=0;i<n;i++)
	 {

	 	printf("Enter ammount for customers %d : ",i);
	 	scanf("%ld",&data[i]);

	 }

	 printf("\n--------------------\n\n");
	 max = data[0];
	 id = 0;
	 for(i=0;i<n;i++)
	 {
	 	printf("data [ %d ] = %ld \t",i,data[i]);

	 	if(max < data[i])
	 	{
	 		max = data[i];
	 		id = i;
	 	}
	 	getchar();// wait untill a key press ,use getch()
	 	printf("max : %ld\n",max);
	 }

	 printf("\n\nMax : %ld \t id : %d\n",max,id);

}
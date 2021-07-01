
// POP : top -down  -> c language//
#include<stdio.h>
void say();
void main()
{
	//clrscr();
		say();
		say();
	//getch();
}
void say() //function
{
	int i=1;
	for(;i<=10;i++)
		printf("Hello World...... %d\n",i);
}
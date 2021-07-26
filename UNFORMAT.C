#include<stdio.h>
#include<conio.h>
// unformatted : character data
// input : getch, getche, getchar, gets
// output: putchar, puts
void main()
{
	char ch;
	char name[100];
	clrscr();

	     printf("Enter charater : ");
	     ch = getche();
	     printf("\n\nThe character : %c\n",ch);

	     printf("Enter the name : ");
	     //scanf("%s",name);  // scanf the word
	     gets(name);  // scan the line
	     printf("       Welcome : %s\n",name);

	printf("\n-----------------------------\n");
	putchar(ch);
	puts("\nHello \tWorld.... %s\n");
	getch();

}
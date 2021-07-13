
// printf : output
// scanf  : input
#include<stdio.h>
int main()
{
		int a,b;
		char ch;

		FILE *fp;
		printf("Enter expression : ");
		scanf("%d%c%d",&a,&ch,&b);

		fp = fopen("History.txt","a");
		switch(ch)
		{
			case '+':fprintf(fp,"%d + %d = %d \n",a,b,a+b);break;
			case '-':fprintf(fp,"%d - %d = %d \n",a,b,a-b);break;
			case '*':fprintf(fp,"%d * %d = %d \n",a,b,a*b);break;
			case '/':fprintf(fp,"%d / %d = %d \n",a,b,a/b);break;
		
			default :printf("invalid operator...");
		}


	 	printf("Name | rollno | subject\n");
	 	printf("mitlesh | 102 | java\n");
	 	printf("divanshu | 454 | python\n");
	 	printf("vidit | 001 | html\n");

	 	//textattr(4)
	 	// cprintf("Hello ");
	 	//textattr(3)
	 	//cprintf("bye");
		printf("---------------------------------\n");
	 	printf("%-10s | %.6s | %-10s\n","Name","rollno","subject");
		printf("---------------------------------\n");
	 	printf("%-10s | %.6d | %-10s\n","Mitlesh",31,"Java");
	 	printf("%-10s | %.6d | %-10s\n","divanshu",23,"Python");
	 	printf("%-10s | %.6d | %-10s\n","vidit",55,"Php");


	return 0;
}

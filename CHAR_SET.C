#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=0,ch=0;
	FILE *fp;
clrscr();
	fp = fopen("ASCII_CODE.bin","w");
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=5;j++)
		 {
			 fprintf(fp,"%2d x %2d = %2d\t",j,i,j*i);
			 ch++;
		}
		fprintf(fp,"\n");
	}
	fprintf(fp,"\n----------------------------\n");
	for(i=1;i<=10;i++)
	{
		for(j=6;j<=10;j++)
		 {
			printf("-------- %d\n",j   );
			 fprintf(fp,"%2d x %2d = %2d\t",j,i,j*i);
			 ch++;
		}
		fprintf(fp,"\n");
	}
	fclose(fp);
getch();
}

#include<stdio.h>
int main()
{
	int day;
	enum dayCodes{mon,tue,wed,thu,fri,sat,sun};
	
	start:

	printf("\nEnter the day code : ");
	scanf("%d",&day);

	// day = day%7;
	if(day==mon)
		printf("Monday\n");
	else if(day==tue)
		printf("Tuesday\n");
	else if(day==wed)
		printf("wednesday\n");
	else if(day==thu)
		printf("thusday\n");
	else if(day==fri)
		printf("Friday\n");
	else if(day==sat)
		printf("saturday\n");
	else if(day==sun)
		printf("sunday\n");
	else
	{
		printf("invalid day code try again...");
		goto start;
	}
	

}

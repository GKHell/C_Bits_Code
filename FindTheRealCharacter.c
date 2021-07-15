
// find the given character is loweralpha,upperalpha , digit or a special symbol

#include<stdio.h>
int main()
{
	char ch = '_';

	printf("Enter character : ");
	scanf("%c",&ch);

	if(ch>='a' && ch<='z') // if(marks >= 85 && marks<=100 )
	{
		printf("%c is lower aphabet...",ch);
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("%c is uppercase aphabet...",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c is digit ...",ch);
	}
	else
	{
		printf("%c is special Symbol...",ch);

	}

	return 'A';
}
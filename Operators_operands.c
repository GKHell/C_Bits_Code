
 // 32 + 4
// arithmetic operators...
#include<stdio.h>
int main()
{
	int a,b;
	char ch;

	printf("Enter values : ");
	scanf("%d%c%d",&a,&ch,&b);

	 switch(ch)
	 {
	 	case '+': printf("%d + %d = %d\n",a,b,a+b);break;
	 	case '-': printf("%d - %d = %d\n",a,b,a-b);break;
	 	case '*': printf("%d * %d = %d\n",a,b,a*b);break;
	 	case '/': printf("%d / %d = %d\n",a,b,a/b);break;
	 	case '%': printf("%d %% %d = %d\n",a,b,a%b);break;
	 }

}
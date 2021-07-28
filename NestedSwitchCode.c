
#include<stdio.h>
int main()
{
	char div;
	int rollno;

	printf("Enter div-rollno : ");
	scanf("%c-%d",&div,&rollno);


	switch(div)
	{

		case 'A':
					switch(rollno)
					{
						 case 1 ... 15 : printf("IronMan");break;
						case 16 ... 27 : printf("Captain");break;
						case 28 ... 35 : printf("Thor");break;
						default : printf("Avengers");

					};
					break;
		case 'B':
					switch(rollno)
					{
						 case 1 ... 20: printf("Mirzapur");break;
						case 21 ... 35: printf("Money heist");break;
						case 36 ... 50: printf("Mr Robot");break;
						default : printf("Loki");

					};
					break;
		case 'C':
				switch(rollno)
				{
					case 1 ... 21: printf("Jeene nai dunga 2");break;
					case 22 ... 35:printf("Tera badla returns");break;
					case 40 ... 60:printf("sattu supari The Pan Wala");break;
					default : printf("Hum hai khoon ke pyase");
				}
	}

}
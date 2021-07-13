
void print_square(int n,char ch)
{
	int i,j;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %c ",ch);
		}
		printf("\n");
	}
}
///////////////////////////////////////

void print_pyramid(int n,char ch)
{
	int i,j,k;

	for(i=0;i<n;i++)
	{
		for(k=n-i;k>=0;k--)
		{
			printf(" ");
		}

		for(j=0;j<=i;j++)
		{
			printf("%c ",ch);
		}
		printf("\n");
	}
}
//////////////////////////////////

void print_pyramid_num(int n)
{
	int i,j,k,counter=0;

	for(i=0;i<n;i++)
	{
		for(k=n-i;k>=0;k--)
		{
			printf("  ");
		}

		for(j=0;j<=i;j++)
		{
			printf("%3d ",++counter);
		}
		printf("\n");
	}
}
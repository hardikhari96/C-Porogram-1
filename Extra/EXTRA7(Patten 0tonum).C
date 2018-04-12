#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=-1,num;
	clrscr();
	printf("\nEnter Value =");
	scanf("%d",&num);

	for(a=1;a<=num;a++)
	{

		for(b=1;b<=a;b++)
		{
			c=c+1;
			printf("%d",c);
		}
		printf("\n");
	}

	getch();
}

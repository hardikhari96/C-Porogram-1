#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter Value of a");
	scanf("%d",&a);

	printf("\n Enter Value of b");
	scanf("%d",&b);

	printf("\n Enter Value of c");
	scanf("%d",&c);

	if (c>a && c>b)
	{
	printf("\n C is bigger than a and b");
	}
	else if (b>a && b>c)
	{
	printf("\n B is Bigger than a and c");
	}
	else if (a>b && a>c)
	{
	printf("\n a is Bigger than b and c");
	}
	else
	{
	printf("\n Value is invalid");
	}
	getch();\
}
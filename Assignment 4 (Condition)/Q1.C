#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter The Value to To Know its Positive,Negative or Zero\n");
	scanf("%d",&a);
	if(a==0)
	{
	printf("Value is zero\n");
	}
	else if(a>0)
	{
	printf("Value is Positive\n");
	}
	else if(a<0)
	{
	printf("Value is Negative\n");
	}
	else
	{
	printf("Wrong VAlue\n");
	}
	getch();
}

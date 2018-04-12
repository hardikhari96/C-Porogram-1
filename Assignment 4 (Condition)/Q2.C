#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter The Value for know its odd,even or zero\n");
	scanf("%d",&a);

	if(a==0)
	{
	printf("\nThe Valueo is Zero\n");
	}
	else if(a%2==0)
	{
	printf("\nTHe Value is Even\n");
	}
	else if(a%2!=0)
	{
	printf("\nThe Value is Odd\n");
	}
	else
	{
	printf("\nWrongValue\n");
	}
	getch();
}
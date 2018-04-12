#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,num;
	clrscr();
	num=5;
	for(a=1;a<=num;a++)
	{
		for(b=1;b<=num-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a*2-1;c++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(a=num-1;a>=1;a--)
	{
		for(b=1;b<=num-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a*2-1;c++)
		{
			printf("*");
		}
		printf("\n");
	}

	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,num;
	clrscr();
	num=3;
	for(a=num;a>=1;a--)
	{
		for(b=1;b<=num-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a*2-1;c++)
		{
			printf("#");
		}
		printf("\n");
	}

	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
		int a,b,c;
		clrscr();

		for (a=1;a<=4;a++)
		{

			for(b=1;b<=4-a;b++)
			{
			printf(" ");

			}
			for(c=1;c<=a;c++)
			{
				printf("%d",c);
			}
			printf("\n");
		}
		getch();
}
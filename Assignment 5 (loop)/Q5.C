#include<stdio.h>
#include<conio.h>
void main()
{
		int input,a;
		clrscr();
		printf("\n Enter Value For Table :");
		scanf("%d",&input);

		for(a=1;a<=10;a++)
		{

		     printf("%d * %d = %d \n",a,input,a*input);

		}
		getch();
}

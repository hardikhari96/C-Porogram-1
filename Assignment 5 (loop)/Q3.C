#include<stdio.h>
#include<conio.h>
void main()
{
	int a,input,t1=1,t2=1,t3;
	clrscr();
	printf("\n Enter Value For Fibanacci Series :");
	scanf("%d",&input);

	for(a=1;a<=input;a++)
	{

	     printf(" %d",t1);
	     t3=t1+t2;
	     t1=t2;
	     t2=t3;

	}

	getch();
}
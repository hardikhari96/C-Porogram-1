#include<stdio.h>
#include<conio.h>
void main()
{
	int nc,amt;
	clrscr();
	printf("\nEnter  How many Call Made By Customer \n");
	printf("\nNO Of Calls :" );
	scanf("%d",&nc);

	if(nc<=200)
	{
	amt=0;
	}
	else if(nc>200 && nc<=300)
	{
	amt=nc*1.80;
	}
	else if (nc>300)
	{
	amt=nc*2.30;
	}
	else
	{
	printf("\Enter Right Value\n");
	}
	printf("\n___________________\n");
	printf("\n Charges Amount is %d \n",amt);

	getch();

}

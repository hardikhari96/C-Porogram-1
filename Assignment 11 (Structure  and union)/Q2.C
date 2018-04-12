#include<stdio.h>
#include<conio.h>
struct time_struct
{
	int hour,minute,second;
}m[3];

void main()
{
	int i;

	clrscr();

	printf("\nEnter Member Form Time as this formate HH:MM:SS\n\n");

	for(i=1;i<=3;i++)
	{
	printf("\n ** Member %d ** \n",i);
	scanf("%d %d %d",&m[i].hour,&m[i].minute,&m[i].second);

	}
	clrscr();
	for(i=1;i<=3;i++)
	{
	printf("\n ** Member %d ** \n",i);
	printf(" \n   %d:hour %d:minute %d:second\n\n",m[i].hour,m[i].minute,m[i].second);
	}
	getch();
}




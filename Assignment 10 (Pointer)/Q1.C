#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,*a,*b,*e;
	clrscr();

	printf("Enter X and Y : ");
	scanf("%d %d",&x,&y);
	a=&x;
	b=&y;
	*e=*a;
	*a=*b;
	*b=*e;
	printf("%d , %d",*a,*b);

	getch();
}



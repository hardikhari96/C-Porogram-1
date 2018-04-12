#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6],r;
	clrscr();
	printf("Enter 1D matrix :\n");

	for(r=0;r<=3;r++)
	{
	   scanf("%d",&a[r]);


	}

	for(r=3;r>=0;r--)
	{
		printf("%d",a[r]);
	}

	getch();
}

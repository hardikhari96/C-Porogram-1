#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6],b[6],p,add[6];
	clrscr();
	printf("Enter 1D matrix :\n");

	for(p=0;p<=4;p++)
	{
		scanf("%d",&a[p]);
	}

	printf("Enter 1D matrix :\n");

	for(p=0;p<=4;p++)
	{
		scanf("%d",&b[p]);
	}

	for(p=0;p<=4;p++)
	{
		add[p]=a[p]+b[p];
		printf("%d\t",add[p]);
	}

	getch();
}

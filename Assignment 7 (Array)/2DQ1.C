#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,ar[40][40],row,col,max,min,stor;
	clrscr();
	printf("\nEnter Row length :");
	scanf("%d",&row);
	printf("\nEnter Colum Length :");
	scanf("%d",&col);

	printf("\n Enter Array :");
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			scanf("%d",&ar[i][j]);
		}
		printf("\n ");
	}


	stor=ar[1][1];
	for(i=1;i<=row;i++)
	{
	   for(j=1;j<=col;j++)
	   {
		if(ar[i][j]>stor)
		{
		stor=ar[i][j];
		}
	   }
	}
	printf(" Large number is %d",stor);

	stor=ar[1][1];
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(ar[i][j]<stor)
			{
				stor=ar[i][j];
			}
		}
	}

	printf("\n Lowest Number is %d",stor);
	getch();
}

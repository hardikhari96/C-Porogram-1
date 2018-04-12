#include<stdio.h>
#include<conio.h>
void main()
{
	int r,array[10],even[10],odd[10];
	clrscr();
	printf("\n Enter Array Value: ");

	for(r=0;r<10;r++)
	{
	     scanf("%d",&array[r]);
	}
	// Even Number

	printf("\n Even :");
	for(r=0;r<10;r++)
	{
		if(array[r]%2==0)
		{
		 printf("%d,",array[r]);

		}
	}

	printf("\n Odd : ");
	for(r=0;r<10;r++)
	{
	  if(array[r]%2!=0)
	  {
	  printf("%d,",array[r]);
	  }
	}

	getch();
}

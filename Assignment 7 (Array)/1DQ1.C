#include<stdio.h>
#include<conio.h>
void main()
{
	int i,ar[40],len,max,min,stor;
	clrscr();
	printf("Enter Array length :");
	scanf("%d",&len);

	printf("\n Enter Array :");
	for(i=1;i<=len;i++)
	{
	scanf("%d",&ar[i]);
	}


	stor=ar[1];
	for(i=1;i<=len;i++)
	{
	   if(ar[i]>stor)
	   {
	   stor=ar[i];
	   }
	}
	printf(" Large number is %d",stor);

	stor=ar[1];
	for(i=1;i<=len;i++)
	{
		if(ar[i]<stor)
		{
		stor=ar[i];
		}
	}

	printf("\n Lowest Number is %d",stor);
	getch();
}

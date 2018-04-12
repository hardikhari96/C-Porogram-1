#include<stdio.h>
#include<conio.h>
void main()
{

	char a[100],b[100],x;
	clrscr();

	printf("\n******** (Case Sensative Compare string ***********\n");
	printf("Enter First Sentence : ");
	scanf("%s",&a);
	printf("\n Enter Second Sentence :");
	scanf("%s",&b);

	x=strcmp(a,b);
	if(x!=0)
	{
	printf("\n The Both sentence are not  equal ");
	}
	else
	{
	printf(" \n THe Both sentence are equal ");
	}
	getch();
}



#include<stdio.h>
#include<conio.h>
void main()
{
	int id,amt,tax,total;
	float dis;
	clrscr();
	printf("\Enter Your ID :");
	scanf("%d",&id);
	printf("\n Enter your Amount");
	scanf("%d",&amt);

	if (0<amt && 5000>amt)
	{
	dis=amt*0.03;
	total=amt-dis;
	}
	else if (5000<amt && 10000>amt)
	{
	dis=amt*0.09;
	total=amt-dis;
	}
	else if (amt>10000)
	{
	dis=amt*0.1;
	total=amt-dis;
	}
	else
	{
	printf("\nEnter Right Value\n");
	}
	printf("\n_______________________\n");
	printf("\n Customer %d get discount %f and MRP is %d and Discounted Value is %d.",id,dis,amt,total);

	getch();
}
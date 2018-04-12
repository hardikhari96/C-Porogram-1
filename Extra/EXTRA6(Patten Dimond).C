#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,num;
	clrscr();
	printf("\nEnter value =");
	scanf("%d",&num);
	for(a=1;a<=num;a++)
	{
		for(b=1;b<=num-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a*2-1;c++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(a=num-1;a>=1;a--)
	{
		for(b=1;b<=num-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a*2-1;c++)
		{
			printf("*");
		}
		printf("\n");
	}

	getch();
}

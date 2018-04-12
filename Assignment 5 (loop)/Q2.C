#include<stdio.h>
#include<conio.h>
void main()
{
		int a,input;
		long int ans=1;
		clrscr();
		printf("\n\nEnter Value For Factorial :");
		scanf("%d",&input);
		for (a=1;a<=input;a++)
		{
		ans=ans*a;
		}

		printf("Answer is : %ld",ans);

		getch();
}
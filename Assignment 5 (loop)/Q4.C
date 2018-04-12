#include<stdio.h>
#include<conio.h>
void main()
{

		int a,ans=0,input;
		clrscr();
		printf("\n Enter Value :");
		scanf("%d",&input);
		for(a=1;a<=input;a++)
		{
			if(a%2==0)
			{
				printf("-%d",a);
				ans=ans-a;
			}
			else
			{
				printf("+%d",a);
				ans=ans+a;
			}

		}
		printf("= %d",ans);

		getch();
}
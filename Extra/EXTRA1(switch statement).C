#include<stdio.h>
#include<conio.h>
void main()
{
		int a,b,ans;
		char ch;
		clrscr();
		printf("\n Enter a=addition,s=substraction,m=multiplication: ");
		scanf("%c",&ch);
		printf("\n Enter A \n");
		scanf("%d",&a);
		printf("\n Enter B \n");
		scanf("%d",&b);

		switch(ch)
		{
		case 'a':
		ans=a+b;
		printf("\nAddition is %d",ans);
		break;

		case 's':
		ans=a-b;
		printf("\nSubstraction is %d",ans);
		break;

		case 'm':
		ans=a*b;
		printf("\nMultiplication is %d",ans);
		break;

		default:
		printf("wrong value");
		break;
		}
		getch();

}
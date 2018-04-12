#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],k,b[10][10],mul1,mul[10][10],i,j,r,c,add[10][10];
	clrscr();
	printf("\n Row :");
	scanf("%d",&r);
	printf("\n Colum :");
	scanf("%d",&c);

	printf("\n\n Enter First Matrix Value ....\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);

		}
		    printf("\n");
	}

	printf("\n Enter Second Matrix Value ..\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}

	clrscr();
	printf("\n Multiplication Of Matrix...\n");
	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{   mul1=0;
		    for(k=0;k<r;k++)
		    {
			 mul1+=a[i][k]*a[k][j];
		    }
		    mul[i][j]=mul1;
		   }

	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("\t%d",mul[i][j]);
		}
		printf("\n");
	}
	// addition of Matrix
	printf("\n\n Addition Of Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		add[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("\t %d",add[i][j]);
		}
		printf("\n");
	}



   getch();
}
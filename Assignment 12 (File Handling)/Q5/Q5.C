#include<stdio.h>
#include<conio.h>
struct customer
{
	long int mbn[15];
	char name[30];
}ec[30];

void main()
{
	int i,no;
	FILE *FE;
	FE=fopen("felecon.txt","w");
	clrscr();
	printf("\n Enter no of Customers will add :");
	scanf("%d",&no);

	for(i=1;i<=no;i++)
	{
		printf("\n **** Customer %d ****\n",i);
		printf("\n Name:");
		scanf("%s",&ec[i].name);
		printf("\n Enter Mobile no:");
		scanf("%ld",&ec[i].mbn);
	}

	for(i=1;i<=no;i++)
	{
		fprintf(FE,"\n **** Customer %d ****\n",i);
		fprintf(FE,"\n Name: %s",ec[i].name);
		fprintf(FE,"\n Enter Mobile no: %ld\n\n",ec[i].mbn);
	}
	fclose(FE);
	getch();
}




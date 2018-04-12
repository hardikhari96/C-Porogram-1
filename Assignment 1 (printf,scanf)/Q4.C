#include<stdio.h>
#include<conio.h>
void main()
{
	char name[30];
	long int num;

	clrscr();
	printf("Enter Name Below \n");
	scanf("%s",&name);

	printf("Enter Roll Number Below \n");
	scanf("%ld",&num);

	printf("\n*************************\n");
	printf("Your Name is %s \n",name);
	printf("Your Roll Number Is %ld",num);
	printf("\n*************************\n");
printf("\n****************************\n");
printf("Code By Harikrushna 74660");

	getch();
}
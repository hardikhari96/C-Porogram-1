#include<stdio.h>
#include<conio.h>
void main()
{
	int A,B,S,BB,M;
	float D;
	clrscr();
	printf("EnterValue A Below\n");
	scanf("%d",&A);

	printf("EnterValue B Below\n");
	scanf("%d",&B);

	S=A+B;
	BB=A-B;
	M=A*B;
	D=A/B;
	printf("Sum is %d\nSubstraction is %d\n Multiplication is%d\nDivision is %.2f",S,BB,M,D);
	printf("\n****************************\n");
	printf("Code By Harikrushna 74660");
	getch();
}
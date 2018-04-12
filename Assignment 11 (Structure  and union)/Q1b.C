#include<stdio.h>
#include<conio.h>
struct stud
{
	int empno;
	char nm[15];
	float sal,pf,hrs;

}a;

void main()
{
	clrscr();
	printf("\n Size of num : %d",sizeof(a.empno));
	printf("\n Size of nm  : %d",sizeof(a.nm));
	printf("\n Size of marks :%d",sizeof(a.sal));
	printf("\n Size of marks :%d",sizeof(a.pf));
	printf("\n Size of marks :%d",sizeof(a.hrs));
	getch();
}
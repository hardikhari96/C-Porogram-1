#include<stdio.h>
#include<conio.h>
struct stud
{
	int num;
	char nm[15];
	float marks[5];

}a;

void main()
{
	clrscr();
	printf("\n Size of num : %d",sizeof(a.num));
	printf("\n Size of nm  : %d",sizeof(a.nm));
	printf("\n Size of marks :%d",sizeof(a.marks));
	getch();
}
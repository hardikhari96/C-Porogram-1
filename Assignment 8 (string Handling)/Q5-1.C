#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char text[100];
	clrscr();
	printf("\n Upper Case into Lower Converter\n");
	gets(text);

	printf("\n %s",strlwr(text));

	getch();
}

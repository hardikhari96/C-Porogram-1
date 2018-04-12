#include<stdio.h>
#include<conio.h>
void main()
{
	float r,s,sf,pi=3.14;
	clrscr();

	printf("\nsurface of Area Of cone\n\n");
	r=5;
	s=5;
	sf=pi*r*(r+s);
	printf("1) Here If r=5    s=5  then Surface Area Of cone is %.2f  \n",sf);


	r=4.5;
	s=1.2;
	sf=pi*r*(r+s);
	printf("2) Here If r=4.5  s=1.2  then Surface Area Of cone is %.2f .\n",sf);

	r=0.5;
	s=2;
	sf=pi*r*(r+s);
	printf("3) Here If r=0.5  s=2   then Surface Area Of cone is %.2f .\n",sf);
	getch();
}
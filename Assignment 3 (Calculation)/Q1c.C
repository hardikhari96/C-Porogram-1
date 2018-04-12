#include<stdio.h>
#include<conio.h>
void main()
{
		float a,b,h,A;
		clrscr();

		printf("\nArea Of Trapezoid \n\n");

		a=5;
		b=5;
		h=2.5;
		A=0.5*(a+b)*h;
		printf("1) Here If a=%f    b=%f   and h=%f    Then Area Of Trapezoid is %.2f.\n",a,b,h,A);


		a=4.5;
		b=1.2;
		h=2;
		A=0.5*(a+b)*h;
		printf("2) Here If a=%f    b=%f   and h=%f    Then Area Of Trapezoid is %.2f.\n",a,b,h,A);


		a=0.5;
		b=2;
		h=4;
		A=0.5*(a+b)*h;
		printf("3) Here If a=%f    b=%f   and h=%f    Then Area Of Trapezoid is %.2f.\n",a,b,h,A);

		getch();
}
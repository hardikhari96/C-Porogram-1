#include<stdio.h>
#include<conio.h>
void main()
{

		float b,h,A;
		clrscr();

		printf("Here b= Base Of Triangle\nand\nh=height Of Triangle");
		printf("\n**************************************\n");

		b=5;
		h=10;

		A=0.5*b*h;
		printf("1) If b=5 and h=10 then Area Of Triangle is %f\n",A);

		b=4.5;
		h=3.5;

		A=0.5*b*h;
		printf("2) If b=4.5 and h=3.5 then Area Of Triangle is %f\n",A);

		b=3.5;
		h=5;

		A=0.5*b*h;
		printf("3) If b=3.5  and h=5 then Area Of Triangle is %f\n",A);
		
		printf("\n****************************\n");
		printf("Code By Harikrushna 74660");	
		getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int amt;
	float total;
	char ch;
	clrscr();
	printf("\n Enter The Subject Name in short single character.\n\nExample :\n Science : s\n Commers : c \n Arts    : a\n");
	printf("\n Enter Subject :");
	scanf("%c",&ch);
	printf("\n Enter Amount of purches :");
	scanf("%d",&amt);

	switch(ch){

	case 's' :
	if (amt>0 && amt<=200){
	total=amt-(amt*0.02);   }
	else if (amt>200){
	total=amt-(amt*0.02)-(amt*0.025);}
	else {
	printf("Science Error");}
	break;

	case 'c' :
	if (amt>0 && amt<=200){
	total=amt-(amt*0.03);   }
	else if (amt>200){
	total=amt-(amt*0.03)-(amt*0.025);}
	else {
	printf("commers Error");}
	break;

	case 'a' :
	if (amt>0 && amt<=200){
	total=amt-(amt*0.04);   }
	else if (amt>200){
	total=amt-(amt*0.04)-(amt*0.025);}
	else {
	printf("arts Error");}
	break;
	}
	printf("\n____________________\n");
	printf("Discounted Value is :%f",total);
	getch();
}
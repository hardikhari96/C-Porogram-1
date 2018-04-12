#include<stdio.h>
#include<conio.h>
void main()
{
	char name[15],dept[100],des[100],city[20],mn;
	long int no,cca,bpay;
	float hra,pf,da,tincome,nsalary;

	clrscr();
	printf("\n *** Salary Calculator ***\n");
	printf("\n\n Enter Employ No :");
	scanf("%ld",&no);
	printf("\n Enter Name :");
	scanf("%s",&name);
	printf("\n Enter Department Name :");
	scanf("%s",&dept);
	printf("\n Enter Designation :");
	scanf("%s",&des);
	printf("\n Enter City Name :");
	scanf("%s",&city);
	printf("\n Metro = m ,\n Non Metro = n\n Enter single Char :");
	scanf("%s",&mn);
	printf("\n Enter Employ Salary Amount :");
	scanf("%ld",&bpay);




	//Da

	if(bpay>0 && 8000>bpay)
	{
	  da=bpay*0.6;
	  }
	else
	  {
	  da=bpay*0.5;
	}
	//HRA

	switch(mn)
	{
	case 'm':
		hra=bpay*0.3;
	break;

	case 'n':
		hra=bpay*0.15;
	break;
	default :
	printf("error in hra");
	break;
	}
	//cca

	cca=300;
	//pf
	pf=bpay*0.06;
	//tincome
	tincome=bpay+da+hra+cca;
	nsalary=tincome-pf;
	clrscr();
	printf("\n______________Informations____________________\n");
	printf("Id: %ld\nName: %s\nDepartment : %s\nDesignation: %s\nCity: %s\n",no,name,dept,des,city);
	printf("Bill Pay: %ld",bpay);
	printf("\n\n____Calculations are_______\n\n");
	printf("CCA: %ld\nTotal Income: %f\n",cca,tincome);
	printf("DA: %f\n",da);
	printf("HRA: %f\n",hra);
	printf("P.F: %f\n",pf);
	printf("Net Salary : %f",nsalary);
	getch();




}
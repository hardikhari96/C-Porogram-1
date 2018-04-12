#include<stdio.h>
#include<conio.h>
void main()
{       FILE*fc;
	int i,grn[5];
	char name[30],sb1[30],sb2[30],sb3[30];
	clrscr();
	fc=fopen("acsd.txt","w");

	printf("\nEnter 5 Student Data as Ask\n");

	for(i=1;i<=5;i++)
	{       printf("\n ***** student %d ***** \n ",i);
		printf("GrNo :");
		scanf("%d",&grn[i]);
		printf("\nName :");
		scanf("%s",&name[i]);
		printf("\nThree Subject:");
		scanf("%s%s%s",sb1[i],sb2[i],sb3[i]);
	}

	for(i=1;i<=5;i++)
	{
		fprintf(fc,"\n***** student %d *****\n ",i);
		fprintf(fc,"\nGrNo %d",&grn[i]);
		fprintf(fc,"\nName : %s",&name[i]);
		fprintf(fc,"\nThree Subject :\n%s\n%s\n%s",sb1[i],sb2[i],sb3[i]);
	}
	fclose(fc);
	getch();
}





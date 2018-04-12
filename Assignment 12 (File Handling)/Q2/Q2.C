#include<stdio.h>
#include<conio.h>
void main()
{
      FILE * fp;
      char str[10000],fname[20];
      clrscr();
      printf("\n Enrer Name of file :");
      scanf("%s",&fname);
      fp=fopen(fname,"a");

      printf("\nEnter File Content : ");
      scanf("%s",&str);
      fprintf(fp,"Contents  is : %s",str);
      fclose(fp);
      printf("\n File Is Deployed ... ...");
      getch();
}





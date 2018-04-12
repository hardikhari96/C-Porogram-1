#include<stdio.h>
#include<conio.h>
void main()
{
      FILE * fp;
      char str[10000];
      clrscr();


      fp=fopen("Q1FILE.TXT","r");

      fscanf(fp,"%s",&str);
      if(fp==NULL)
      {
      printf("\n File Does Not Exist ");
      }
      else
      {
      printf(" Text inside the file is : \n %s",str);
      }
      getch();
}





#include<stdio.h>
#include<conio.h>
void main()
{
	int ar[100],i,n=10,j,counter;
	 clrscr();
	 printf("Enter element of array :");
	 for(i=0;i<n;i++)
	 {
		scanf("%d",&ar[i]);
	 }
	 printf("All Prime Number is -");
	 for(i=0;i<n;i++)
	 {
		counter=0;
		for(j=2;j<ar[i];j++)
		{
			if(ar[i]%j==0)
			{
				counter=1;
				break;
			}
		}
		if(counter==0)
		{
			printf("%d,",ar[i]);
		}
	 }
	 getch();
}


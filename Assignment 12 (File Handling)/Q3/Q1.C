#include<stdio.h>
#include<conio.h>
void main()
{       FILE*f1;
	FILE*f2;
	int i,j,a,n,number[10];
	clrscr();
	printf("Enter The Value of N \n");
	scanf("%d",&n);
	f1=fopen("unsort.txt","w");
	printf("Enter The Number \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
		fprintf(f1," %d ",number[i]);
	}
	fclose(f1);
	f2=fopen("sort.txt","w");
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(number[i]>number[j])
			{
			a=number[i];
			number[i]=number[j];
			number[j]=a;
			}
		}
	}


	fprintf(f2,"THe Number Arranged is ascend:");
	for(i=0;i<n;i++)
	{
	       fprintf(f2," %d,",number[i]);
	}
	fclose(f2);

	getch();
}





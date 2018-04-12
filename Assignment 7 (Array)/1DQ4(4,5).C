#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j,a,n,number[10];
	clrscr();
	printf("Enter The Value of N \n");
	scanf("%d",&n);

	printf("Enter The Number \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
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


	printf("THe Number Arranged is ascend:");
	for(i=0;i<n;i++)
	{
		printf("%d,",number[i]);
	}

	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(number[i]<number[j])
			{
			a=number[i];
			number[i]=number[j];
			number[j]=a;
			}
		}
	}

	printf("\nThe Numer Arrange in desend:");
	for(i=0;i<n;i++)
	{
		printf("%d,",number[i]);
	}
	getch();
}


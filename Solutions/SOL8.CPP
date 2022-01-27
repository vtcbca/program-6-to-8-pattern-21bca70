
/* wap to print following pattern for inputted number
		       1
		     2 1 2
		   3 2 1 2 3


Date:24/01/22*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i;
	clrscr();
	printf("Enter the value:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(i=0;i<=a-b;i++)
		{
			printf(" ");
		}
		for(i=0;i<=2*b-1;i++)
		{
			printf("123");
		}

	printf("\n");
	}
	getch();
}
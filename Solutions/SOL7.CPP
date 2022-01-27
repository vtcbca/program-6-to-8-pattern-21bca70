/* wap to print following pattern (reverse triangle).
	*****
	  ***
	    *
Date:24/01/22*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i;
	clrscr();
	printf("Enter the value:");
	scanf("%d",&i);
	for(a=i;a>=1;a=a-2)
	{
		for(b=1;b<=a;b++)
		printf("*");
		printf("\n");
	}
	getch();
}
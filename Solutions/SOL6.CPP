/* wap to print following pattern
		*
		**
		***
		****
Date:24/01/22*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter a number till you are draw pattern:");
	scanf("%d",&c);
	for(a=1;a<=c;a++)
		{
			for(b=1;b<a;b++)
			printf("*");
			printf("\n");
		}
	getch();
}
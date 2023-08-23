#include<stdio.h>
#include<conio.h>

void main()
{
 int i=0,j,n=4;
 clrscr();
 do{    j=i;
	while(j>=0)
	{
	  printf("%c ",j+65);
	  j--;
	}
	printf("\n");
	i++;
   }while(i<=n);
 getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,j;
 char ch='A';
 clrscr();
 do{
	j=1;
	while(j<=i)
	{
	  printf("%c ",ch++);
	  j++;
	}
	printf("\n");
	i++;
 }while(i<=5);
 getch();
}
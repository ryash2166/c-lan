#include<stdio.h>
#include<conio.h>
void main()
{
 int i=65,j;
 clrscr();
 do{
	j=65;
	while(j<=i)
	{
	  printf("%c ",j);
	  j++;
	}
	printf("\n");
	i++;
 }while(i<=69);
 getch();
}
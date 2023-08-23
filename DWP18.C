#include<stdio.h>
#include<conio.h>
void main()
{
 int i=5,j;
 clrscr();
 do{
	j=i;
	while(j<=5)
	{
	 printf("%d ",j);
	 j++;

	}
	printf("\n");
	i--;
 }while(i>=1);
 getch();
}
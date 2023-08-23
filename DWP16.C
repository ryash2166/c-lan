#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,j,a=65,s=97;
 clrscr();
 do{
	j=1;
	while(j<=i)
	{
	 if(j%2==0)
	 {
	  printf("%c ",a++);
	  s++;
	 }
	 else
	 {
	   printf("%c ",s++);
	   a++;
	 }
	  j++;

	}
	printf("\n");
	i++;
 }while(i<=5);
 getch();
}
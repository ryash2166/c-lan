#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,j,k=1;
 clrscr();
 do{
	j=1;
	while(j<=i)
	{
	 if(k%2==1)
	 {
	  printf("1 ");
	  k++;
	 }
	 else
	 {
	   printf("0 ");
	   k++;
	 }
	  j++;
	}
	printf("\n");
	i++;
 }while(i<=5);

 getch();
}
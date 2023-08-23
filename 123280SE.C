#include<stdio.h>
#include<conio.h>
void main()
{
 int a,k=1;
 clrscr();
 for(a=1;a<=10;a++)
 {
  printf("\t%d",a*k);
  k=k*2;
 }
 getch();
}

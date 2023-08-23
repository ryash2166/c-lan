#include<stdio.h>
#include<conio.h>

void main()
{
 int a=1,n=1;
 clrscr();
 while(a<=10)
 {
  printf("\t%d",a*n);
  n=n*2;
  a++;
 }
 getch();
}
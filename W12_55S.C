#include<stdio.h>
#include<conio.h>

void main()
{
 float a=0.5,n=0.5;
 clrscr();
 printf("0.5");
 while(a<=5)
 {
  n+=a;
  printf("\t%f",n);
  a++;
 }
 getch();
}
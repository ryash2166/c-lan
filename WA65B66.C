#include<stdio.h>
#include<conio.h>

void main()
{
  char i=65;
  int a=i;
  clrscr();
  while(i<=90)
  {
    printf("\t%c-%d",i,a);
    i++;
    a++;
  }
  getch();
}
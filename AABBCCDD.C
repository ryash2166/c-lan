#include<stdio.h>
#include<conio.h>
void main()
{
 int a=32;
 char i;
 clrscr();
 for(i=65;i<=90;i++)
 {

  printf("%c-%c\t",i,i+a);
 }
 getch();
}

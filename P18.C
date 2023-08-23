#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,s=97,a=65;
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
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
  }
  printf("\n");
 }
 getch();
}
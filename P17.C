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
  if(i%2==0)
  {
   printf("%c ",s++);
   a++;
  }
  else
  {
   printf("%c ",a++);
   s++;
  }
  }
  printf("\n");
 }
 getch();
}
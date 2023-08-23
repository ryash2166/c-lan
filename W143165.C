#include<stdio.h>
#include<conio.h>

void main()
{
 int a=1,n;
 clrscr();
 scanf("%d",&n);
 while(a<=n)
 {
 if(a%2==0)
 {
  printf("\n%d",a*a);
 }
 else
 {
  printf("\n%d",a);
 }
  a++;
 }
 getch();
}
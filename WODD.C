#include<stdio.h>
#include<conio.h>

void main()
{
 int a=1,n;
 clrscr();
 scanf("%d",&n);
 while(a<=n)
 {
 if(a%2==1)
 {
  printf("%d ",a);
 }
  a++;
 }
 getch();
}
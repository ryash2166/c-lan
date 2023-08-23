#include<stdio.h>
#include<conio.h>

void main()
{
 int n,r=0,b;
 clrscr();
 scanf("%d",&n);
 do{
      b=n%10;
      r=r*10+b;
      n/=10;
 }while(n!=0);
  printf("\n%d",r);
 getch();
}
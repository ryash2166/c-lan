#include<stdio.h>
#include<conio.h>

void main()
{
 int a=1,p=0,k=1,m,n;
 clrscr();
 scanf("%d",&m);
 printf("%d",k);
 while(a<=m-1)
 {
  n=k+p;
  printf("\t%d",n);
  p=k;
  k=n;
  a++;
 }
 getch();
}
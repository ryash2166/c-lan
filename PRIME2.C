#include<stdio.h>
#include<conio.h>
void main()
{
 int i=2,n,j=0,m;
 clrscr();
 scanf("%d",&n);
 scanf("%d",&m);
 do{i=2,j=0;
 do{
      if(n%i==0)
      {
       j=1;
      }
      i++;
 }while(i<=n-1);
 if(j==0)
 {
   printf("%d is prime number.\n",n);
 }
 n++;
 }while(i<=m);
  getch();
 }
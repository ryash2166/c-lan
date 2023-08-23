#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,n,k;
 clrscr();
 scanf("%d",&n);
 while(n!=0 && n<=5)
 {
 if(n==0)
 {
  break;
 scanf("%d",&i);
 scanf("%d",&j);
  if(n==1)
  {
   printf("%d",i+j);
  }
  else if(n==2)
  {
   printf("%d",i-j);
  }
	}
  n++;
 }
 getch();
}

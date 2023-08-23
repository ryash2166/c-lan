#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,n;
 clrscr();
 scanf("%d",&n);
 for(i=5;i>=1;i--)
 {
  for(j=i;j<=n;j++)
  {
   printf("%d ",i);
  }
  printf("\n");
 }
 getch();
}
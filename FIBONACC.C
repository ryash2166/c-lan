#include<stdio.h>
#include<conio.h>

void main()
{
   int i,p=0,c=1,n,m;
   scanf("%d",&m);
   printf("%d",c);
   for(i=1;i<=m-1;i++)
   {
   n=c+p;
   printf("\t%d",n);
   p=c;
   c=n;
   }
   getch();
}
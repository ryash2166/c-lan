#include<stdio.h>
#include<conio.h>

void main()
{
   int i,j,n;
   clrscr();
   scanf("%d",&n);
   for(i=1;i<=2*n;++i)
   {
   if(i%2==0)
   {
    for(j=1;j<=n;++j)
    {
     printf("\t%d ",i);
    }
   }
    printf("\n");
   }
   getch();
}

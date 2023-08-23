#include<stdio.h>
#include<conio.h>

void main()
{
   int i,j,n,k;
   clrscr();
   scanf("%d",&n);
   printf("      1 \n");
   for(i=1;i<=n;++i)
   {
    for(j=i;j<=n;j++)
    {
     printf(" ");
    }
    for(k=1;k<=i;k++)
    {
     printf("%d ",k);
    }
    printf("1 ");
    printf("\n");
   }
   getch();
}
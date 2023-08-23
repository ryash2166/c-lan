#include<stdio.h>
#include<conio.h>

void main()
{
   int i,j,n=4;
   clrscr();

   for(i=0;i<=n;++i)
   {
    for(j=i;j>=0;j--)
    {
     printf("%c ",j+65);
    }
    printf("\n");
   }
   getch();
}
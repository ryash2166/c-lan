#include<stdio.h>

void main()
{
   int i;
   clrscr();
   for(i=1;i<=25;i++)
   {
   printf("\t%d ",i);
    if(i%5==0)
    {
    printf("\n");
    }
   }
}
#include<stdio.h>
#include<conio.h>

void main()
{
   int i;
   clrscr();
   for(i=11;i<=55;i++)
   {
    printf("%d ",i);
    if(i%5==0)
    {
    i=i+5;
    printf("\n");
    }
   }
   getch();
}
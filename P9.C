#include<stdio.h>
#include<conio.h>

void main()
{
   int i;
   clrscr();
   for(i=65;i<90;i++)
   {
    printf("%c ",i);
    if((i+1)%5==0)
    {
    printf("\n");
    }
   }
   getch();
}

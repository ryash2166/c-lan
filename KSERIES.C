#include<stdio.h>
#include<conio.h>

void main()
{
   float a,k=0.5;
   clrscr();

   for(a=0.5;a<=10;a++)
   {
    k=k+a;
     printf("\t%f",k);
   }

   getch();
}
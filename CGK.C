#include<stdio.h>
#include<conio.h>

void main()
{
   int i;
   clrscr();
   for(i=65;i<=90;i++)
   {
   if((i+1)%4==0)
   {
   printf("%c\t",i);
   }
   else if((i+1)%2==0)
   {
   printf("%c\t",i+32);
   }
   }
   getch();
}
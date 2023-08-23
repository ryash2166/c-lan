#include<stdio.h>
#include<conio.h>

void main()
{
 int i=65;
 clrscr();
 while(i<=90)
 {
   if((i+1)%4==0)
   {
     printf("\t%c",i);
   }
   else if((i+1)%2==0)
   {
     printf("\t%c",i+32);
   }
   i++;
 }
 getch();
}

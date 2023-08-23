#include<stdio.h>
#include<conio.h>

void main()
{
 int i=65;
 clrscr();
 while(i<=90)
 {
   if(i%2==1)
   {
     if(i%4==1)
     {
       printf("\t%c",i);
     }
     else
     {
       printf("\t%c",i+32);
     }
   }
   i++;
 }
 getch();
}

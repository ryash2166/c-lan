#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j;
 clrscr();
 scanf("%d %d",&i,&j);
 do{
      if(i>j)
      {
       i=i-j;
      }
      else
      {
       j=j-i;
      }
 }while(i!=j);
 printf("GCD= %d",i);
 getch();
}

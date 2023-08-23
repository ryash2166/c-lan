#include<stdio.h>
#include<conio.h>
void main()
{
 int j,i=0;
 clrscr();
  do{
      j=1;
      if(i%2==0){
      while(j<=5){
      printf("%d ",i);
      j++;
      }          }
       printf("\n");
       i++;
  }while(i<=8);
 getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
 int j,i=5;
  do{
      j=1;
      while(j<=5){
      printf("%d",i);
      j++;
      }
       printf("\n");
       i--;
  }while(i>=1);
 getch();
}
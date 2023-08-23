#include<stdio.h>
#include<conio.h>
int main()
{
 int j,i=65;
 clrscr();
  do{
      j=1;
      while(j<=5){
      printf("%c ",i);
      j++;
      }
       printf("\n");
       i++;
  }while(i<=69);
 getch();
 return 0;
}
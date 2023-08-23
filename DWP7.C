#include<stdio.h>
#include<conio.h>
void main()
{
 int i=11;
 clrscr();
  do{
      while(i<=55){
      printf("\t%d",i);
      if(i%5==0){
	i=i+5;
	printf("\n");
	}
	i++;
      }
       printf("\n");
  }while(i<=7);
 getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1;
 clrscr();
  do{
      while(i<=25){
      printf("\t%d",i);
      if(i%5==0){
	printf("\n");
	}
	i++;
      }
       printf("\n");
  }while(i<=7);
 getch();
}
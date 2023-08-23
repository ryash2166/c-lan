#include<stdio.h>
#include<conio.h>
void main()
{
 int j,i=0,n;
 clrscr();
 scanf("%d",&n);
  do{
      j=1;
      if(i%2==1){
      while(j<=n){
      printf("%d",i);
      j++;
      }          }
       printf("\n");
       i++;
  }while(i<=10);
 getch();
}
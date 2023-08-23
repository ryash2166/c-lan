#include<stdio.h>
#include<conio.h>
void main()
{
 int a=1,b,n;
 clrscr();
 scanf("%d",&n);
 do{          b=1;
 do{
	printf("%d ",b);
 }while(++b<=a);
  printf("\n");
 }while(++a<=n);
 getch();
}
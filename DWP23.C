#include<stdio.h>
#include<conio.h>

void main()
{
 int i=1,j,n;
 clrscr();
 scanf("%d",&n);
 do{
     j=0;
     while(j<=n-i)
     {
       printf("* ");
       j++;
     }
     printf("\n");
     i++;
   }while(i<=n);
 getch();
}
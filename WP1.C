#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,n=5,j=1;
 clrscr();
 while (i<=n)
 {
    j=1;
    while(j<=n)
    {
      printf("* ");
      j++;
    }
    printf("\n");
    i++;
 }
 getch();
}

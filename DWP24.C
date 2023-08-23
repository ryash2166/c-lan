#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,j,n,k;
 clrscr();
 scanf("%d",&n);
 do{
	j=1;
	while(j<=i)
	{
	  printf(" ");
	  j++;
	}
	   k=1;
	   while(k<=n-i+1)
	   {
	     printf("* ");
	     k++;
	   }
	printf("\n");
	i++;
 }while(i<=n);
 getch();
}
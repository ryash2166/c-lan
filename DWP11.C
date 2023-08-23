#include<stdio.h>
#include<conio.h>
void main()
{
 int i=5,j,n;
 clrscr();
 scanf("%d",&n);
 do{
	j=i;
	while(j<=n)
	{
	  printf("%d ",i);
	  j++;
	}
	printf("\n");
	i--;
 }while(i>=1);
 getch();
}
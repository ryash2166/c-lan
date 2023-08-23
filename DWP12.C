#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,j,n=1,r;
 clrscr();
 scanf("%d",&r);
 do{
	j=1;
	while(j<=i)
	{
	  printf("\t%d ",n++);
	  j++;
	}
	printf("\n");
	i++;
 }while(i<=r);
 getch();
}
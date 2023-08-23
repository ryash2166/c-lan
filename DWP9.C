#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,j,n;
 clrscr();
 scanf("%d",&n);
 do{
	j=1;
	while(j<=i)
	{
	  printf("%d ",j);
	  j++;
	}
	printf("\n");
	i++;
 }while(i<=n);
 getch();
}
//store and display details a book using structre.

#include<stdio.h>
#include<string.h>
struct book
{
	char a[100];
	char n[100];
	int l;
};

void main()
{
	struct book b1,b2;
		strcpy(b1.n,"Game Of Thrones");
		strcpy(b1.a,"James Bond");
		b1.l= 1938;
		strcpy(b2.n,"Richest Things");
		strcpy(b2.a,"John Scoot");
		b2.l= 1948;
	printf("The Book Name:- %s",b1.n);
	printf("\nThe Book Author Name:- %s",b1.a);
	printf("\nThe Public Year Of Book:- %d",b1.l);
	printf("\n");
	printf("The Book Name:- %s",b2.n);
	printf("\nThe Book Author Name:- %s",b2.a);
	printf("\nThe Public Year Of Book:- %d",b2.l);
}
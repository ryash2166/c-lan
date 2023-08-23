// write a program to copy one string into another string.

#include<stdio.h>
#include<string.h>

void main()
{
	char a[100],b[100],i=0;
	fgets(a,100,stdin);
	while(a[i])
	{
		b[i]=a[i];
	    i++;
	}
	b[i]='\0';
	puts(b);
}

//enter space

#include<stdio.h>
#include<string.h>

void main()
{
	char a[50]="Skill",b[50]="Qode";
	int i,j;
	printf("%s",a);
	printf("\t%s",b);
	for(i=0;a[i]!='\0';i++);
	a[i]=' ';
	i++;
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	printf("\n%s",a);
}
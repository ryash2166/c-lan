//check whether two given strings are Anagram. 

#include<stdio.h>
#include<string.h>

int Anagram(char s1[],char s2[]);

int Anagram(char s1[],char s2[])
{
	
	int i,j,t;
    int n=strlen(s1);
	int n1=strlen(s2);
	
	if(n != n1)
	{
		return 0;		
	}
	for(i=0;s1[i]!='\0';i++)
	{
		t=0;
		for(j=0;s2[j]!='\0';j++)
		{
			if(s1[i] == s2[j])
			{
				t=1;
				break;
			}
		}
		if(t==0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
int main()
{
	char s1[100], s2[100];
	fgets(s1,100,stdin);
	fgets(s2,100,stdin);
	if(Anagram(s1,s2))
	{
		printf("Anagrams.");
	}
	else
	{
		printf("Not Anagrams.");
	}
}
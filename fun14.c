//decimal to binary.

#include<stdio.h>

int find(int n);
int find(int n)
{
    if (n == 0)
	{
        return 0;
	}
    else
	{
        return (n % 2 + 10 * find(n / 2));
	}
}
int main()
{
    int n;
	scanf("%d",&n);
    printf("%d", find(n));
    return 0;
}   
//a structer that represent points in 2D plan.

#include <stdio.h>

struct point 
{
	int x,y;
};
void main()
{
	struct point p1={
	p1.x = 23,
	p1.y = 32,
	};
	printf("%d",p1.x);
	printf("\n%d",p1.y);
} 
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter length of the sides of triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("equilateral");
	}
	else if(a!=b && b!=c)
	{
		printf("scalene");
	}
	else
	{
		printf("isosceles");
	}
}

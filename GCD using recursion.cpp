#include<stdio.h>
int gcd(int a, int b);
int main()
{
	int a,b,c;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	c=gcd(a,b);
	printf("%d",c);
}
int gcd(int a, int b)
{
	int max,min,c;
	if(a>b)
	{
		max=a;
		min=b;
	}
	if(b>a)
	{
		max=b;
		min=a;
	}
	c=max%min;
	if(c==0)
	return min;
	else
	gcd(min,c);
}

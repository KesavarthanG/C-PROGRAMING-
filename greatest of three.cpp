#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is greatest");
	}
	else if(b>c)
	{
		printf("b is greatest");
	}
	else if(c>b)
	{
		printf("c is greatest");
	}
}

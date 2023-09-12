#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("values of a and b after swapping:%d %d",a,b);
	
}

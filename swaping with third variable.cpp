#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("value of a and b after swaping:%d %d",a,b);
}

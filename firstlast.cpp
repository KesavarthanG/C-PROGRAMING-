#include<stdio.h>
int main()
{
	int r=0,n,i=0,c,p;
	printf("enter number:");
	scanf("%d",&n);
	c=n;
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	p=c%10;
	n=p;
	for(int a=0;a<i;a++)
	{
		p=c%10;
		c=c/10;
	}
	printf("the sum of first and last digit:%d",p+n);
	return 0;
}

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
	for(int a=0;a<i;a++)
	{
		p=c%10;
		r=r+p;
		c=c/10;
	}
	printf("sum of digits f number:%d",r);
}

#include<stdio.h>
int main()
{
	int b,r=0,n,i=0,c,p;
	printf("enter number:");
	scanf("%d",&n);
	c=n;
	b=n;
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	for(int a=0;a<i;a++)
	{
		p=c%10;
		r=r*10+p;
		c=c/10;
	}
	if(b==r)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}

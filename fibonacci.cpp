#include<stdio.h>
int main()
{
	int c,n,a=0,b=1;
	printf("enter number:");
	scanf("%d",&n);
	if(n==1)
	{
		printf("0");
	}
	 else if(n==2)
	{
		printf("1");
	}
	else
	{
	for(int i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d",c);
}

}

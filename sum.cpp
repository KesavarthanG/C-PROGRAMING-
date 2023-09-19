#include<stdio.h>
int main()
{
	int a=0;
	int n;
	printf("enter number upto which to be added:");
	scanf("%d",&n);
	for (int i=0;i<=n;i++)
	{
		a=a+i;
	}
	printf("the value of sum:%d",a);
	return 0;
}

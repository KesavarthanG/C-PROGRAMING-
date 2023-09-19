#include<stdio.h>
int main()
{
	int a=1;
	int n;
	printf("enter number for factorial:");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		a=a*i;
	}
	printf("the value of sum:%d",a);
	return 0;
}

#include<stdio.h>
int main()
{
	int n;
	printf("enter the number upto which even numbers are required:");
	scanf("%d",&n);
	printf("odd numbers are:");
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n;
	printf("enter the number upto which odd numbers are required:");
	scanf("%d",&n);
	printf("odd numbers are:");
	for(int i=1;i<n;i=i+2)
	{
		printf("%d ",i);
	}
	return 0;
}

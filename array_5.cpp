#include<stdio.h>
int main()
{
	int n,i,tmp;
	printf("enter n:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n/2;i++)
	{
		tmp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=tmp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

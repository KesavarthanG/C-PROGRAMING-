#include<stdio.h>
int main()
{
	int n,i,tmp;
	printf("enter an even number n:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			tmp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=tmp;
		}
	}
	printf("changed array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

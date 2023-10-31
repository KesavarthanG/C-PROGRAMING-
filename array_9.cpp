#include<stdio.h>
int main()
{
	int i,j,p,s=0,n;
	printf("enter n:");
	scanf("%d",&n);
	int arr[n-1];
	printf("enter array elements from first n:\n");
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		s=s+arr[i];
	}
	p=n*(n+1)/2;
	j=p-s;
	printf("the missing element:%d",j);
	return 0;
}

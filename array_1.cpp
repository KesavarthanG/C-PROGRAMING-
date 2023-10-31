#include<stdio.h>
int main()
{
	int n,s=0,i;
	printf("enter n:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(i=0;i<n;i++)
	{
		s=s+arr[i];
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("maximum,minimum,average:%d %d %.2f",max,min,(float)s/n);
	return 0;
}

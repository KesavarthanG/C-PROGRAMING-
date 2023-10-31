#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter n:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j] && j>i)
			{
			k++;	
			}
			else if(arr[i]==arr[j] && j<i)
			{
				break;
			}
		}
		if(k!=0)
		{
			printf("%d",arr[i]);
		}
	}
}

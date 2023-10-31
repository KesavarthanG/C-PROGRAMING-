#include<stdio.h>
int main()
{
	int n,i,j,sum;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter sum:");
	scanf("%d",&sum);
	int arr[n];
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==sum)
			{
				printf("%d,%d\n",arr[i],arr[j]);
			}
		}
		
	}
	return 0;
}
	

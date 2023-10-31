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
			k=1;
			break;
			}
			
	}
	if(k==1)
	{
		printf("%d is the first element that appears:",arr[i]);
	}
}
return 0;
}

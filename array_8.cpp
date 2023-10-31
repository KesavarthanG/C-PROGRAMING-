#include<stdio.h>
int main()
{
	int i,j,tmp,n,x;
	printf("enter n:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j+1]<arr[j])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
		
			}
			
		}
	}
	i=0;
	j=1;
	while(i<n)
	{
		if(arr[i]==arr[j])
		{
			for(x=j;x<n-1;x++)
			{
				tmp=arr[x];
				arr[x]=arr[x+1];
				arr[x+1]=tmp;
			}
			n--;
		}
		else
		{
			i++;
			j++;
		}
	}
	for(i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
	
}

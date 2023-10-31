#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter n:");
	scanf("%d",&n);
	int arr[n],r[n];
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		k=0;
		r[i]=1;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j] && j>i)
			{
			r[i]++;
			}
			else if(arr[i]==arr[j] && j<i)
			{
				
				break;
			}
}
if(r[i]>n/2)
{
	k=1;
	printf("majority:%d",arr[i]);
	break;
}
}
if(k==0)
{
	printf("no majority");
}
return 0;
}

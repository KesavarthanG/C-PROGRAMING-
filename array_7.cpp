#include<stdio.h>
int main()
{
	int n,s=0,k,i;
	printf("enter n:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter k:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(k==arr[i])
		{
			s++;
		}
	}
	printf("the number %d appears %d times",k,s);
	return 0;
}

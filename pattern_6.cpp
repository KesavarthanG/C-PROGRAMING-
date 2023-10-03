#include<stdio.h>
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int s=0;s<i;s++)
		{
			printf("  ");
		}
		for(int j=0;j<2*n-1-2*i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

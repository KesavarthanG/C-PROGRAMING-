#include<stdio.h>
int main()
{
	int n;
	int s=1;
	printf("enter n:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			printf("%d ",s);
			s=s+1;
		}
		
		printf("\n");
	}
	return 0;
}

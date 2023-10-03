#include<stdio.h>
int main()
{
	int n,a;
	printf("enter starting integer and noof rows value:");
	scanf("%d %d",&a,&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf("%d ",a);
		}
		a++;
		printf("\n");
	}
	a=a-1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			printf("%d ",a);
		}
		a--;
		printf("\n");
	}
	return 0;
}

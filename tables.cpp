#include<stdio.h>
int main()
{
	int r,a;
	printf("enter number for multiplication tables:");
	scanf("%d",&a);
	for (int i=1;i<=10;i++)
	{
		r=a*i;
		printf("\n%d*%d=%d",a,i,r);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a,i=0;
	printf("enter number:");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		i++;
	}
	printf("the length of number:%d",i);
	return 0;
}

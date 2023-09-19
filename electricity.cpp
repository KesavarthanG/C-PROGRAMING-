#include<stdio.h>
int main()
{
	int n;
	printf("enter the unit of electricity used:");
	scanf("%d",&n);
	if(n<=100)
	{
		printf("the amount to be paid:%.2f",1.3*n);
	}
	else if(n>100 && n<=200)
	{
		printf("the amount to be paid:%.2f",1.8*n);
	}
	else if(n>200 && n<=500)
	{
		printf("the amount to be paid:%.2f",2.4*n);
	}
	else
	{
		printf("the amount to be paid:%.2f",3*n);
	}
}

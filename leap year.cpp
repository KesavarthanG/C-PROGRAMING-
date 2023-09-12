#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("enter year:");
	scanf("%d",&a);
	if(a%4==0 && (a%100!=0||a%400==0))
	{
		printf("it is leap year");
	}
	else
	{
		printf("not a leap year");
	}
}

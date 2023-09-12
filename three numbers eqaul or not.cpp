#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("enter a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("all the three numbers are equal");
	}
	else
	{
		printf("all the three numbers are not equal");
	}
}

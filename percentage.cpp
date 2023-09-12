#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("enter maths marks:");
	scanf("%f",&a);
	printf("enter phy mark:");
	scanf("%f",&b);
	printf("enter chem marks:");
	scanf("%f",&c);
	printf("enter english marks:");
	scanf("%f",&d);
	printf("enter biology marks:");
	scanf("%f",&e);
	printf("percentage:%f %%",float(a+b+c+d+e)/5);
}

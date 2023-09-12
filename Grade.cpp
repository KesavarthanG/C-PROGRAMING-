#include<stdio.h>
int main()
{
	float a,b,c,d,e,f;
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
	f=(a+b+c+d+e)/5;
	printf("percentage:%f %%",(float)f);
	
	if(f>=90)
	{
		printf("\ngrade A");
	}
	else if(f>=80)
	{
		printf("\ngrade B");
	}
	else if(f>=70)
	{
		printf("\ngrade C");
	}
	else if(f>=60)
	{
		printf("\ngrade D");
	}
	else if(f>=40)
	{
		printf("\ngrade E");
	}
	else
	{
		printf("\ngrade F");
	}

}

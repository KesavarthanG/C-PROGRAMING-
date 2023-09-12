#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	printf("enter value in km:");
	scanf("%f",&a);
	printf("\nvalue in meter:%f",float(a*1000));
	printf("\nvalue in centimeter:%f",(float)a*1000*100);
	printf("\nvalue in millimeter:%f",(float)pow(10,6)*a);
}

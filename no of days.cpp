#include<stdio.h>
int main()
{
	int a,b;
	printf("enter year:");
	scanf("%d",&a);
	printf("enter month:");
	scanf("%d",&b);
	if(a%4!=0 && b==2)
	{
		printf("number of days is 28");
	}
	
	else if(a%4==0 && (a%100!=0||a%400==0) && b==2)
	{
		printf("number of days is 29");
	}
	 else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
	{
		printf("number of days is 31");
	}
	else if(b==4||b==6||b==9||b==11)
	{
		printf("number of days is 30");
	}
	
}

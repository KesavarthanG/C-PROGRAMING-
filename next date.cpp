#include<stdio.h>
int main()
{
	int a,b,c,d,m,y;
	printf("enter date");
	scanf("%d %d %d",&a,&b,&c);
	if(a==31 && (b==1||b==3||b==5||b==7||b==8||b==10))
	{
		m=b+1;
		d=1;
		printf("next date:");
		printf("%d %d %d",d,m,c);	
	}
	else if(a==31 && (b==12))
	{
		d=1;
		m=1;
		y=c+1;
		printf("the next date:");
		printf("%d %d %d",d,m,y);
	}
	else if(a==30 && (b==4||b==6||b==9||b==11))
	{
		d=1;
		m=b+1;
		printf("the next date is");
		printf("%d %d %d",d,m,c);
	}
	else if(a==28 && c%4==0 && (c%100!=0||c%400==0))
	{
		d=a+1;
		m=2;
		printf("%d %d %d",d,m,c);
	}
	else if(a==29 && b==2 && c%4==0 && (c%100!=0||c%400==0))
	{
		d=1;
		m=3;
		printf("%d %d %d",d,m,c);
		
	}
	else if(b>12||a>31||b==2 && a==29 && c%4!=0)
	{
		printf("invalid");
	}
	else
	{
		d=a+1;
		m=b;
		printf("%d %d %d",d,m,c);
	}
	

	
	
}

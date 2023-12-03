/*Write a C program to print the smallest and largest word in a given string*/
#include<stdio.h>
#include<string.h>
int main()
{
	int count,max=0,index1,index2,i,min=100;
	char str[100],lon[100],sma[100];
	printf("enter str:");
	scanf("%[^\n]s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ')
		{
			count++;
		}
		else
		{
			if(count>max)
			{
			max=count;
			index1=i-max;
			}
			if(count<min)
			{
				min=count;
				index2=i-min;
			}
			
			count=0;
			
			
		}
	}
	if(count>max)
	{
		max=count;
		index1=i-max;
	}
		if(count<min)
	{
		min=count;
		index2=i-min;
	}
	int j=0;
	for(i=index1;i<index1+max;i++)
	{
	lon[j]=str[i];
	j++;	
	}
	lon[j]='\0';
	j=0;
	for(i=index2;i<index2+min;i++)
	{
	sma[j]=str[i];
	j++;	
	}
	sma[j]='\0';
	printf("long:%s\n",lon);
	printf("small:%s",sma);
	return 0;
	
}

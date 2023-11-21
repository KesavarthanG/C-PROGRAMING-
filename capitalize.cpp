/*Write a C program to capitalize first letters of each word in a given string*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,k,a=0;
	char str[100];
	scanf("%[^\n]s",str);
	for(i=0;str[i]!=0;i++)
	{
		
		if(i==0)
		{
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32;
				continue;
			}
		}
		if(str[i]==' ')
		{
			k=i+1;
			if(str[k]>='a'&& str[k]<='z')
			{
				a=1;
				str[k]=str[k]-32;
				continue;
				
			}
		}
		else if(a==0)
		{
			if(str[i]>='A' && str[i]<='Z')
			{
				str[i]=str[i]+32;
			}
		}
		a=0;
		
	}
	printf("%s",str);
	return 0;
}

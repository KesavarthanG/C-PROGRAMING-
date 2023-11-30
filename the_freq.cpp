/*Write a C program to find the frequency of “the” word in a given lengthy string*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int a=0,i;
	printf("enter str:");
	scanf("%[^\n]s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='t' && str[i+1]=='h' && str[i+2]=='e')
		{
			a++;
		}
	}
	printf("the frequency of \"the\" in given string:%d",a);
	return 0;
}

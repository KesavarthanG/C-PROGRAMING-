/*Write a C program to cound number of words in a string.*/
#include<stdio.h>
int main()
{
	int i;
	char str[100];
	int w=0;
	printf("enter the string");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))&& str[i+1]==' '||str[i+1]=='\0')
		{
			w++;
		}
	}
	printf("total no of words:%d",w);
	return 0;
}

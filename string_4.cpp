#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str[]="hello";
	char str2[]="world";
	char str3[100];
	for(i=0;str[i]!='\0';i++)
	{
		str3[i]=str[i];
	}
	for(j=0;str2[j]!='\0';j++,i++)
	{
		str3[i]=str2[j];
	}
	str3[i]='\0';
	printf("the concat string:%s",str3);
	return 0;
}

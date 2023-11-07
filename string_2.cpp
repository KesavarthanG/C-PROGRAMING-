#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char arr[10]="helloC";
	char str[10];
	
	
	for(i=0;arr[i]!='\0';i++)
	{
		str[i]=arr[i];
	}
	str[i]='\0';
	printf("the  string:%s",str);
	return 0;
}

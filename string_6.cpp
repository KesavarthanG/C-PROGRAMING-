#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	char arr[10];
	printf("enter string 1:");
	scanf("%s",name);
	printf("enter string 2:");
	scanf("%s",arr);
	if(strcmp(name,arr))
	{
		printf(" not equal");
	}
	else
	{
		printf(" same");
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	int i;
	printf("enter string:");
	scanf("%s",arr);
	for(i=0;i<strlen(arr);i++)
	{
		if(arr[i]>='A' &&arr[i]<='Z')
		{
			arr[i]=arr[i]+32;
		}
	}
	printf("the string is :%s",arr);
	return 0;
}

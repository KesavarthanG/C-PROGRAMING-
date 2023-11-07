#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char arr[10]="mom";
	char str[10];
	strcpy(str,strrev(arr));
	printf("%s",str);
	if(strcmp(str,arr))
	{
		printf(" not palindrome");
	}
	else
	{
		printf(" palindrome");
	}
	return 0;
}

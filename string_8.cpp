#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a;
	int i;
	char arr[10];
	printf("enter string 1:");
	scanf("%s",arr);
	fflush(stdin);
	printf("enter character:");
	scanf("%c",&a);
	
	for(i=0;arr[i]!='\0';i++)
	{
		if(a==arr[i])
		{
			printf("the letter occurs at index:%d",i);
			break;
		}
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a;
	int i,c,m;
	char arr[10]="helloc";
	
	fflush(stdin);
	printf("enter character:");
	scanf("%c",&a);
	printf("enter index:");
	scanf("%d",&c);
	m=strlen(arr);
	for(i=m;i>=c;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[c]=a;
	printf("the string is:%s",arr);
	return 0;
}

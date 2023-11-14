#include<stdio.h>
#include<string.h>
int main()
{
	int a,i,tmp;
	char str[100];
	printf("enter string 1:");
	scanf("%s",str);
	a=strlen(str);
	for(i=0;i<a/2;i++)
	{
		tmp=str[i];
		str[i]=str[a-1-i];
		str[a-i-1]=tmp;
	}
	printf("reversed string:%s",str);
	return 0;
	
}

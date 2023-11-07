#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char arr[5]={'a','e','i','o','u'};
	char str[]="helloC";
	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<5;j++)
		{
			if(str[i]==arr[j])
			{
				printf("%c ",str[i]);
			}
		}
	}
	return 0;
}

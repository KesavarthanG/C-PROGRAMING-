#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char s;
	int i,j;
	scanf("%s",str);
	for(i=0;i<strlen(str)-1;i++)
	{
		for(j=0;j<strlen(str)-i-1;j++)
		{
			if(str[j]>str[j+1])
			{
				s=str[j];
				str[j]=str[j+1];
				str[j+1]=s;
			}
		}
	}
	printf("%s",str);
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,j,c;
	scanf("%s",str);
	int r[26];
	for(i=0;i<26;i++)
	{
		for(j=0;j<strlen(str);j++)
		{
			if(str[j]=='a'+i)
			{
				r[i]++;
			}
		}
	}
	int max=r[0];
	for(i=0;i<26;i++)
	{
		
		for(j=0;j<26;j++)
		{
			if(r[i]>r[j])
			{
				c=i;
			}
		}
	}
	printf("%c",c+97);
}

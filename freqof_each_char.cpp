#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char a[26];
	int i,j;
	for(i=0;i<26;i++)
	{
		a[i]='a'+i;
	}
	scanf("%s",str);
	int r[26]={0};
	for(i=0;i<26;i++)
	{
		for(j=0;j<strlen(str);j++)
		{
			if(a[i]==str[j])
			{
				r[i]++;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(r[i]!=0)
		{
			printf("the letter %c occurs %d\n",i+97,r[i]);
		}
	}
}

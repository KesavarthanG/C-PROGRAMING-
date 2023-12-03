#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char s[26]={0};
	int i;
	scanf("%[^\n]s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		continue;
		if(str[i]>96 && str[i]<123)
		{
			s[str[i]-97]=1+s[str[i]-97];
		}
		else if(str[i]>65 && str[i]<'Z')
		{
			s[str[i]-65]=1+s[str[i]-65];
		}
	}
	int k=0;
	for(i=0;i<26;i++)
	{
		if(s[i]==0)
		{
			k=1;
			printf("not panagram");
			break;
		}
		
	}
	if(k==0)
	printf("panagram");
	return 0;
}

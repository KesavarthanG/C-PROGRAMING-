#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k;
	char str[100];
	printf("enter struing:");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<strlen(str)-i;j++)
		{
			for(k=0;k<=i;k++)
			{
				printf("%c",str[j+k]);
			}
			printf("\n");
		}
	}
	return 0;
}

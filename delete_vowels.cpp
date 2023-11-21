/*Write a C program to print the string after deleting the vowels in the string.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,j,k;
	char vow[6]={'a','e','i','o','u'};
	printf("enter str:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;j<5;j++)
		{
			if(str[i]==vow[j])
			{
				k=i;
				while(k<strlen(str))
				{
					str[k]=str[k+1];
					k++;
				}
			}
		}
	}
	printf("the string after deleting vowels:%s",str);
	return 0;
}

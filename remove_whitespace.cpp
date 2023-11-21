/*Write a C program to remove white spaces from a given strin*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int k,i;
	printf("enter string:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			k=i;
			while(k<strlen(str))
			{
				str[k]=str[k+1];
				k++;
			}
			
		}
		
	}
	printf("%s",str);
	return 0;
}

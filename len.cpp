/*Given a string sentence which consists of both uppercase & lowercase alphabets and words are
separated by empty space characters. Write a program to return the length of the last word in the string. If string is empty return “-1*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,c=0;
	scanf("%[^\n]s",str);
	for(i=strlen(str)-1;str[i]!='\0';i--)
	{
		if(str[i]==' ' && (str[i+1]!=' '))
		{
		break;
    	}
		if(str[i]==' ')
		continue;
		if(str[i]!=' ')
		{
			c++;
			
		}
	}

	printf("the length:%d",c);
}

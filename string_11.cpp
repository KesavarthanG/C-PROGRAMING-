#include<stdio.h>
#include<string.h>
int main()
{
	int tmp,i,j;
	char arr[100]="hello";
	for(i=0;i<strlen(arr);i++)
	{
		for(j=0;j<strlen(arr)-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			tmp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=tmp;	
			}
		}
	}
	printf("%s",arr);
}

#include<stdio.h>
int main()
{
	FILE*f1;
	int i,a;
	f1=fopen("input.txt","w");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a);
		putw(a,f1);
	}
	fclose(f1);
	f1=fopen("input.txt","r");
	FILE*f2;
	FILE*f3;
	f2=fopen("even.txt","w");
	f3=fopen("odd.txt","w");
	while((a=getw(f1))!=EOF)
	{
		if(a%2==0)
		{
			putw(a,f2);
		}
		else
		{
			putw(a,f3);
		}
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	f2=fopen("even.txt","r");
	f3=fopen("odd.txt","r");
	printf("the even:\n");
	while((a=getw(f2))!=EOF)
	{
		printf("%d ",a);
	}
	fclose(f2);
	printf("\nthe odd:\n");
	while((a=getw(f3))!=EOF)
	{
		printf("%d ",a);
	}
	fclose(f3);
	return 0;
}

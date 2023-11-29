#include<stdio.h>
int main()
{
	char c;
	FILE*fp;
	fp=fopen("myfile.txt","w");
	while((c=getchar())!=EOF)
	{
		putc(c,fp);
	}
	fclose(fp);
	fp=fopen("myfile.txt","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
	return 0;
}

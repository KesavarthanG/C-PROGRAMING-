// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
    char s[26];
    int i,j,x,b;
    for(i=0;i<26;i++)
    {
        s[i]='a'+i;
    }
    char str[100];
    scanf("%s",str);
    int r[26];
    for(i=0;i<26;i++)
    {
        for(j=0;j<strlen(str);j++)
        {
            if(s[i]==str[j])
            {
                r[i]++;
            }
        }
    }
    for(i=0;i<26;i++)
    {
        for(j=i+1;j<strlen(s);j++)
        {
            if(s[i]==str[j])
            {
                for(x=j;x<strlen(s);x++)
                {
                    s[x]=s[x+1];
                }
                j--;
            }
        }
    }
    b=strlen(s);
    int k=0;
    for(i=0;i<26;i++)
    {
        if(r[i]!=0)
        {
            if(r[i]==i+1)
            {
                k++;
            }
        }
    }
    if(b==k)
    {
        printf("superascii");
    }
    else
    {
        printf("not");
    }
    return 0;
}


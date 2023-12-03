#include <stdio.h>

int main() {
    int i,j,x;
    char str[100];
    printf("enter string 1:");
    scanf("%s",str);
    char str2[100];
    printf("enter string 2:");
    scanf("%s",str2);
    for(i=0;i<strlen(str);i++)
    {
        for(j=0;j<strlen(str2);j++)
        {
            if(str[i]==str2[j])
            {
                for(x=i;x<strlen(str);x++)
                {
                    str[x]=str[x+1];
                }
                i--;
            }
        }
    }
    printf("%s",str);

    return 0;
}

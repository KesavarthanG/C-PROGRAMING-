#include <stdio.h>
#include<string.h>

int main() {
    
    char str[100];
    int i,j,k=0,x;
    scanf("%[^\n]s",str);
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;j<strlen(str);j++)
        {
            if(str[i]==' ')
            continue;
            if(str[i]==str[j])
            {
                for(x=j;x<strlen(str);x++)
                {
                    str[x]=str[x+1];
                    k++;
                }
                j--;
            }
        }
    }
    printf("%s",str);

    return 0;
}

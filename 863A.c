#include<stdio.h>
#include<string.h>
int main()
{
    char aa[100],bb[100];
    int l,i,k=0,x=0;
    while(1)
    {
         gets(aa);
        l=strlen(aa);
        for(i=l-1; i>=0; i--)
        {
            bb[k]=aa[i];
            k++;
        }
        for(i=0; i<1; i++)
        {
            if(aa[i]==bb[i])
                x++;
        }
        if(x==1)
            printf("YES\n");
        else
            printf("NO\n");
        x=0;
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,x=0,t,l;
    char a[100];
    scanf("%d",&n);
    while(n--)
    {
        gets(a);
        l=strlen(a);
        for(i=0; i<=l; i++)
        {
            if(a[i]==a[i+1])
                x++;
            if(x>1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        x=0;
    }

}

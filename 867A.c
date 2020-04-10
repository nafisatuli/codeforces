#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf(" %c",&a[i]);
    }
    if(a[1]=='S'&&a[n]=='F')
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

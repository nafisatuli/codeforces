#include<stdio.h>
int main()
{
    int n,i,t,s,a[100];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[i+1]!=a[i])
        {
            s=a[i+1];
        }
        else
        {
            t=a[i];
        }
    if(n%2==0&&t!=s)
    {
        printf("YES\n");
        printf("%d %d\n",t,s);
    }
    else
        printf("NO\n");
    return 0;

}

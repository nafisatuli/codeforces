#include<stdio.h>
int main()
{
    int n,x,odd=0,even=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        if(x%2!=0)
        {
            odd++;
        }
        else even++;
    }
    if(odd>0) printf("First\n");
    else printf("Second\n");
    return 0;
}

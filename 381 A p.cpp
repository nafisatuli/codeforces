#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,aa[1005];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&aa[i]);
    }
    int l=0,r=n-1;
    int d=0,s=0;
    while(l<=r)
    {
        if(aa[l]>aa[r])
        {
            s+=aa[l];
            l++;
        }
        else
        {
            s+=aa[r];
            r--;
        }
        if(l>r)
        {
            printf("%d %d\n",l,r);
        }
        if(aa[l]>aa[r])
        {
            d+=aa[l];
            l++;
        }
        else
        {
            d+=aa[r];
            r--;
        }
    }
    printf("%d %d\n",s,d);
}

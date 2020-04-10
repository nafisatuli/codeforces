#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,aa[1005];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&aa[i]);
    }
    int l=0,r=n-1,x=1;
    int d=0,s=0;
    while(l<=r)
    {
        if(x==1)
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
            x=2;
        }
        else if(x==2)
        {
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
            x=1;
        }
    }
    printf("%d %d\n",s,d);
}

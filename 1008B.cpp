#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,flag=0;
    ll x,y,temp;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        cin >> x >> y;
        if(x<y)swap(x,y);
        if(i==0)temp=x;
        else
        {
            if(temp>=x)temp=x;
            else if(temp>=y)temp=y;
            else flag=1;
        }
    }
    if(flag==1)printf("NO\n");
    else printf("YES\n");
}

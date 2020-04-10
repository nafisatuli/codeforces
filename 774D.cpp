#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll aa[100005],bb[100005];
int main()
{
    ll n,l,r;
    bool f=true;
    cin >> n >> l >> r;
    for(ll i=0; i<n; i++)cin >> aa[i];
    for(ll i=0; i<n; i++)cin >> bb[i];
    for(ll i=0; i<l-1; i++)
    {
        if(aa[i]!=bb[i])
        {
            f=false;
            break;
        }
    }
    for(int i=r; i<n; i++)
    {
        if(aa[i]!=bb[i])
        {
            f=false;
            break;
        }
    }
    if(!f)cout << "LIE" << endl;
    else cout << "TRUTH" << endl;
}

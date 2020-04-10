#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,ll>mp;
int main()
{
    ll x,y,n,m,k=0;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        cin >> x >> y;
        if(mp[x]<y)
        {
            cout << x << "mp " << mp[x] << " v " << y << endl;
            k-=mp[x];
            mp[x]=y;
            k+=y;
            cout << "sum " << k << endl;
        }
    }
    cin >> m;
    for(ll i=0; i<m; i++)
    {
        cin >> x >> y;
        if(mp[x]<y)
        {

            cout << x <<" mp " << mp[x] << "v " << y << endl;
            k-=mp[x];
            mp[x]=y;
            k+=y;
            cout << "sum " << k << endl;
        }
    }
    cout << k << endl;
}

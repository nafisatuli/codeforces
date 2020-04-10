#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll aa[200005];
int main()
{
    ll x,y;
    cin >> x >> y;
    vector <ll> v;
    ll num = y;
    ll sum = 0;
    ll div =x/y;
    if(x%y != 0) div = div+1;
    ll i = 1;
    while(y--)
    {
        ll p = div;
        ll mx = -1331;
        ll count  = 0;
        ll j = 0;
        while(i<=x && j < p)
        {
            ll temp;
            cin >> temp;
            count ++;
            mx = max(temp,mx);
            j++;
            i++;
        }
        v.push_back(count);
        sum += mx;
    }
    cout << sum << endl;
    for(ll i= 0; i<v.size(); i++)
    {
        cout << v[i];
        if(v.size()-1!=i) cout << " ";
    }
}

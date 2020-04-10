#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map< int,pair<ll,ll> >mp;
int main()
{
    ll n,m,a,b,sum1=0,sum2=0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        mp[((a-b)*(-1))]=make_pair(a,b);
        sum1+=a;
        sum2+=b;
    }
    if(sum1>m) return cout << "-1" << endl,0;
    else if(sum1>=m) return cout << "0" << endl,0;
    else
    {
        ll c=0;
        unordered_map< int,pair < ll ,ll > >::iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            sum1-=(it->second.first);
            sum1+=(it->second.second);
            c++;
            if(sum1<=m) break;
        }
        cout << c << endl;
    }
}

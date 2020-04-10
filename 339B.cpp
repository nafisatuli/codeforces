#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll aa[1000005];
int main()
{
    ll n,m,res=0;
    cin >> n >> m;
    for(ll i=0; i<m; i++)
        cin >> aa[i];
    ll v=aa[0];
    res+=aa[0];
    for(ll i=1; i<m; i++)
    {
        if(aa[i]==v)continue;
        else if(v>aa[i])res+=(n-v)+aa[i];
        else res+=aa[i]-v;
        v=aa[i];
    }
    cout << res-1 << endl;
}

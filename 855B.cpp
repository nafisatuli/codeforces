#include<bits/stdc++.h>
using namespace std;
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    FastRead;
    ll n,p,q,r;
    ll mx1=-3000000000000000000,mx2=-3000000000000000000,res=-3000000000000000000;
    cin >> n >> p >> q >> r;
    ll aa[n+10];
    for(ll i=0; i<n; i++)cin >> aa[i];
    for(ll i=0; i<n; i++)
    {
        mx1=max(mx1,aa[i]*p);
        mx2=max(mx2,(aa[i]*q+mx1));
        res=max(res,(aa[i]*r+mx2));
    }
    cout << res << endl;
}

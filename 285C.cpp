#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll aa[10000010];
int main()
{
    ll n,sum=0;
    cin >> n;
    for(ll i=0; i<n; i++)cin >> aa[i];
    sort(aa,aa+n);
    for(ll i=0; i<n; i++)sum+=abs(aa[i]-(i+1));
    cout << sum << endl;
}

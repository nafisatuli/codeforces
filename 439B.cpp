#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,x,aa[100005],sum=0;
    cin >> n >> x;
    for(ll i=0; i<n; i++)cin >> aa[i];
    sort(aa,aa+n);
    for(ll i=0; i<n; i++)
    {
        sum+=aa[i]*x;
        if(x>1)x--;
    }
    cout << sum << endl;
}

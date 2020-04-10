#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,res=1;
    cin >> a >> b;
    ll mn=min(a,b);
    for(ll i=1;i<=mn;i++)
    {
        res*=i;
    }
    cout << res << endl;
}

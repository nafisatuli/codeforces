#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,cont=0;
    cin >> n;
    if(n==1||n==2)cout << 0 << endl;
    else
    {
        for(ll i=3; i<=n; i+=2)
            cont++;
        cout << cont << endl;
    }
}

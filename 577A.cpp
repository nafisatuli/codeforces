#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x,cont=0;
    cin >> n >> x;
    for(ll i=1;i<=n;i++)
    {
        if(x%i==0&&x/i<=n)cont++;
    }
    cout << cont << endl;
}

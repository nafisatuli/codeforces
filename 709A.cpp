#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,p,x,sum=0,cont=0;
    cin >> n >> m >> p;
    for(ll i=1; i<=n; i++)
    {
        cin >> x;
        if(x<=m)sum+=x;
        if(sum>p)
        {
            sum=0;
            cont++;
        }
    }
    cout << cont << endl;
}

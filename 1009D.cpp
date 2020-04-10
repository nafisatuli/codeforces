#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct info
{
    ll a;
    ll b;
} v[100005];
int main()
{
    ll n,m;
    cin >> n >> m;
    ll count = 0;
    ll k = 0;
    //vector <pair <ll,ll> > v;
    for(ll i = 1; i<=n; i++)
        for(ll j = i; j<=n; j++)
        {
            if(i!=j && __gcd(i,j)==1)
            {
                count++;
                v[k].a = i;
                v[k].b = j;
                k++;
//			cout << i << " " << j << endl;
//			if(v[j]!=i) vector[i].push_back(j);
            }
        }
//	cout <<count<< endl;
    if(count<m) cout << "Impossible" << endl;
    else
    {
        cout << "Possible" << endl;
        for(ll i=0; i<m; i++) cout << v[i].a << " " << v[i].b<< endl;
    }

}

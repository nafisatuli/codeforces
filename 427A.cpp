#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll aa[1000005];
int main()
{
    ll n,cont=0,x,sum=0;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        cin >> x;
        sum+=x;
        if(sum<0)
        {
            cont++;
            sum=0;
        }
        else continue;
    }
    cout << cont << endl;
}

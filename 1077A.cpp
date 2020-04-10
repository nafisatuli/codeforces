#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,k;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> k;
        ll r1=((k-k/2)*a)-((k/2)*b);
        cout << r1 << endl;
    }
}

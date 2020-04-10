#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x,y,mx=0;
    cin >> n;
    while(n--)
    {
        cin >> x >> y;
        mx=max(mx,x+y);
    }
    cout << mx << endl;
}

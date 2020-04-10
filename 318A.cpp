#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k,s;
    cin >> n >> k;
    if(n%2==0)
        s=n/2;
    else s=(n/2)+1;
    if(s>=k)cout << 2*k-1 << endl;
    else cout << (k-s)*2 << endl;
}

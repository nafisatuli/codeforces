#include<bits/stdc++.h>
using namespace std;
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    FastRead;
    ll k2,k3,k5,k6,mn=0,mn1=0,res=0;
    cin >> k2 >> k3 >> k5 >> k6;
    mn=min(k2,k5);
    mn1=min(mn,k6);
    k2-=mn1;
    res+=(mn1*256);
    mn1=min(k2,k3);
    res+=(32*mn1);
    return cout << res << endl,0;
}

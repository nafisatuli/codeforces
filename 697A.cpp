#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,s,x;
    cin >> t >> s >> x;
    ll r1=t+s;
    ll r2=x-r1;
    if(t==x||r1==x)
    {
        return cout << "YES" << endl,0;
    }
    else if(r1>x)return cout << "NO" << endl,0;
    if(r2%s==0||r2%s!=0)
    {
        return cout << "YES" << endl,0;
    }
    else return cout << "NO" << endl,0;
}

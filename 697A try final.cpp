#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,s,x,r1,r2;
    cin >> t >> s >> x;
    r1=t+s;
    r2=x-r1;
    if(t==x||r1==x)
    {
        return cout << "YES" << endl,0;
    }
    else if(r1>x)
    {
        return cout << "NO" << endl,0;
    }
    else if(r2%s==0||r2%s==1)
    {
        return cout << "YES" << endl,0;
    }
    else cout << "NO" << endl,0;
}

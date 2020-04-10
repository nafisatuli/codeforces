#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    bool f=true;
    cin >> n;
    while(n!=0)
    {
        if(n%1000==144)
            n/=1000;
        else if(n%100==14)
            n/=100;
        else if(n%10==1)
            n/=10;
        else
        {
            f=false;
            break;
        }
    }
    if(f)cout << "YES" << endl;
    else cout << "NO" << endl;
}

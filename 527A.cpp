#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,sum=0;
    cin >> n >> m;
    while(n>0&&m>0)
    {
        if(n>m)
        {
            sum+=n/m;
            n=n%m;
        }
        else
        {
            sum+=m/n;
            m=m%n;
        }
    }
    cout << sum << endl;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x,sum1=0,sum2=0,sum3=0,res1,res2;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        cin >> x;
        sum1+=x;
    }
    for(ll i=0; i<n-1; i++)
    {
        cin >> x;
        sum2+=x;
    }
    for(ll i=0; i<n-2; i++)
    {
        cin >> x;
        sum3+=x;
    }
    res1=sum1-sum2;
    res2=sum2-sum3;
    cout << res1 << "\n" << res2 << endl;
}

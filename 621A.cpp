#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v;
int main()
{
    int n;
    ll x,sum=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x%2!=0)v.push_back(x);
        else sum+=x;
    }
    sort(v.begin(),v.end());
    ll len=v.size();
    if(len%2==0)
    {
        for(int i=0; i<len; i++)sum+=v[i];
    }
    else
    {
        for(int i=1; i<len; i++)sum+=v[i];
    }
    cout << sum << endl;
}

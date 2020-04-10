#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>vec1,vec2;
int main()
{
    ll n,m,r,x,res1=0,res2=0;;
    cin >> n >> m >> r;
    for(ll i=0;i<n;i++)
    {
        cin >> x;
        vec1.push_back(x);
    }
    for(ll i=0;i<m;i++)
    {
        cin >> x;
        vec2.push_back(x);
    }
    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end(),greater<ll>());
    ll temp=vec1[0];
    ll temp2=vec2[0];
    res1=r/temp;
    res2+=r%temp;
    res2+=(res1)*temp2;
    if(res2>r)
    cout << res2 << endl;
    else cout << r << endl;
}

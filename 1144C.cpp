#include<bits/stdc++.h>
using namespace std;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
typedef long long ll;
vector<ll>inc,dc;
unordered_map<ll,ll>mp;
int main()
{
    fastread();
    ll n;
    bool flag=true;
    cin >> n;
    ll aa[n+5];
    for(ll i=0; i<n; i++)cin >> aa[i];
    for(ll i=0; i<n; i++)
    {
        mp[aa[i]]++;
        if(mp[aa[i]]==3)
        {
            flag=false;
            break;
        }
        else if(mp[aa[i]]==1)
            dc.push_back(aa[i]);
        else inc.push_back(aa[i]);
    }
    if(flag==true)
    {
        cout << "YES" << endl;
        sort(inc.begin(),inc.end());
        cout << inc.size() << endl;
        for(auto x: inc)
        {
            cout << x << " ";
        }
        cout << endl;
        cout << dc.size() << endl;
        sort(dc.begin(), dc.end(), greater<ll>());
        for (auto x : dc)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod (ll)1e9+7
#define power 13331
ll hash[600005];
ll base[600005];
int main()
{
    unordered_map<ll,bool>mp;
    int n,m,len;
    ll v;
    string s;
    base[0]=1;
    cin >> n >> m;
    for(int i=1;i<=600000;i++)
    {
        base[i]=(base[i-1]*power)%mod;
    }
    for(int i=1;i<=n;i++)
    {
        cin >> s;
        len=s.length();
        s="*"+s;
        for(int j=1;j<=len;j++)
        {
            hash[j]=(hash[j-1]+base[j]*s[j])%mod;
        }
        for(int j=1;j<=len;j++)
        {
            for(int w='a';w<='c';w++)
            {
                if(s[j]==w)continue;
                v=(hash[len]-s[j]*base[j])%mod;
                v=(v+w*base[j])%mod;
                if(v<0)
                    v+=mod;
                mp[v]=1;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        memset(hash,0,sizeof(hash));
        cin >> s;
        len=s.length();
        s="*"+s;
        for(int j=1;j<=len;j++)
        {
            hash[j]=(hash[j-1]+base[j]*s[j])%mod;
        }
        v=hash[len];
        if(mp[v]==1)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}

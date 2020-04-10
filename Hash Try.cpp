#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define power 13331
using namespace std;
typedef long long int ll;
unordered_map<ll,bool>mp;
ll base[600005];
ll hsh[600005];
int main()
{
    ll v;
    int len,n,m;
    string s;
    base[0]=1;
    cin >> n >> m;
    for(int i=1; i<=600000; i++)
    {
        base[i]=(base[i-1]*power)%mod;
    }
    for(int i=1; i<=n; i++)
    {
        cin >> s;
        len=s.length();
        s="*"+s;
        for(int j=1; j<=len; j++)
        {
            hsh[j]=(hsh[j-1]+(base[j]*s[j]))%mod;
        }
        for(int j=1; j<=len; j++)
        {
            for(int w='a'; w<='c'; w++)
            {
                if(s[j]==w)
                    continue;
                v=(hsh[len]-(s[j]*base[j]))%mod;
                if(v<0)v+=mod;
                v=(v+(w*base[j]))%mod;
                mp[v]=1;
            }
        }
    }
    memset(hsh,0,sizeof(hsh));
    for(int i=0; i<m; i++)
    {
        cin >> s;
        len=s.length();
        s="*"+s;
        for(int j=1; j<=len; j++)
        {
            hsh[j]=(hsh[j-1]+(base[j]*s[j]))%mod;
        }
        v=hsh[len];
        if(mp[v]==1)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

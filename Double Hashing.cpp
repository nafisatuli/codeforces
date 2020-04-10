#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
#define power1 13331
#define power2 209959
using namespace std;
typedef long long int ll;
unordered_map<ll,bool>mp;
ll base1[600005];
ll hsh1[600005];
ll base2[600005];
ll hsh2[600005];
int main()
{
    ll v1,v2;
    int len,n,m;
    string s;
    base1[0]=1;
    base2[0]=1;
    cin >> n >> m;
    for(int i=1; i<=600000; i++)
    {
        base1[i]=(base1[i-1]*power1)%mod;
        base2[i]=(base2[i-1]*power2)%mod;
    }
    for(int i=1; i<=n; i++)
    {
        cin >> s;
        len=s.length();
        s="*"+s;
        for(int j=1; j<=len; j++)
        {
            hsh1[j]=(hsh1[j-1]+(base1[j]*s[j]))%mod;
            hsh2[j]=(hsh2[j-1]+(base2[j]*s[j]))%mod;
        }
        for(int j=1; j<=len; j++)
        {
            for(int w='a'; w<='c'; w++)
            {
                if(s[j]==w)
                    continue;
                v1=(hsh1[len]-(s[j]*base1[j]))%mod;
                v2=(hsh2[len]-(s[j]*base2[j]))%mod;
                if(v1<0)v1+=mod;
                if(v2<0)v2+=mod;
                v1=(v1+(w*base1[j]))%mod;
                v2=(v2+(w*base2[j]))%mod;
                mp[v1]=1;
                mp[v2]=1;
            }
        }
    }
    memset(hsh1,0,sizeof(hsh1));
    memset(hsh2,0,sizeof(hsh2));
    for(int i=0; i<m; i++)
    {
        cin >> s;
        len=s.length();
        s="*"+s;
        for(int j=1; j<=len; j++)
        {
            hsh1[j]=(hsh1[j-1]+(base1[j]*s[j]))%mod;
            hsh2[j]=(hsh2[j-1]+(base2[j]*s[j]))%mod;
        }
        v1=hsh1[len];
        v2=hsh2[len];
        if(mp[v1]==1 && mp[v2]==1)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
unordered_map<ll,bool>mp;
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define power1 13331
#define power2 209959
ll base1[600005];
ll hsh1[600005];
ll base2[600005];
ll hsh2[600005];
ll v1,v2;
void gnrtPow()
{
    base1[0]=1;
    base2[0]=1;
    for(int i=1; i<=600000; i++)
    {
        base1[i]=(base1[i-1]*power1)%mod;
        base2[i]=(base2[i-1]*power2)%mod;
    }
}
void hash_val(string str)
{
    int len=str.size();
    for(int i=1; i<=len; i++)
    {
        hsh1[i]=(hsh1[i-1]+(base1[i]*str[i]))%mod;
    }
}
void hash_val2(string str)
{
    int len=str.size();
    for(int i=1; i<=len; i++)
    {
        hsh2[i]=(hsh2[i-1]+(base2[i]*str[i]))%mod;
    }
}
int main()
{
    FastRead;
    gnrtPow();
    string s;
    int n,m,len;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        cin >> s;
        len=s.size();
        s="*"+s;
        hash_val(s);
        hash_val2(s);
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

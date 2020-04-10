#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
unordered_map<ll,bool>mp;
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define power1 13331
#define power2 209959
ll base1[1000006];
ll hsh1[1000006];
ll base2[1000006];
ll hsh2[1000006];
void gnrtPow()
{
    base1[0]=1;
    base2[0]=1;
    for(int i=1; i<=600005; i++)
    {
        base1[i]=(base1[i-1]*power1)%mod;
        base2[i]=(base2[i-1]*power2)%mod;
    }
}
void hash_val(string s)
{
    s="*"+s;
    int len=s.size();
    for(int i=1; i<=len; i++)
    {
        hsh1[i]=(hsh1[i-1]+(base1[i]*s[i]))%mod;
    }
}
void hash_val2(string s)
{
    s="*"+s;
    int len=s.size();
    for(int i=1; i<=len; i++)
    {
        hsh2[i]=(hsh2[i-1]+(base2[i]*s[i]))%mod;
    }
}
int main()
{
    FastRead;
    ll v1,v2;
    int l,n,m;
    string s;
    gnrtPow();
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        cin >> s;
        l=s.size();
        hash_val(s);
        hash_val2(s);
        s="*"+s;
        for(int j=1; j<=l; j++)
        {
            for(int w='a'; w<='c'; w++)
            {
                if(s[j]==w)continue;
                v1=(hsh1[l]-(s[j]*base1[j])%mod);
                v2=(hsh2[l]-(s[j]*base2[j])%mod);
                if(v1<0)v1+=mod;
                if(v2<0)v2+=mod;
                v1=(v1+(w*base1[j]))%mod;
                v2=(v2+(w*base2[j]))%mod;
                mp[v1]=1;
                mp[v2]=2;
            }
        }
    }
    memset(hsh1,0,sizeof(hsh1));
    memset(hsh2,0,sizeof(hsh2));
    for(int i=1; i<=m; i++)
    {
        cin >> s;
        hash_val(s);
        hash_val2(s);
        l=s.size();
        v1=hsh1[l];
        v2=hsh2[l];
        if(mp[v1]==1&&mp[v2]==1)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

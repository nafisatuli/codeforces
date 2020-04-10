#include<bits/stdc++.h>
using namespace std;
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
map<char,bool>mp1;
map<ll,bool>mp2;
ll b=13331,pw[1000006],res=0,v=0,k;
void gnrtPow()
{
    pw[0]=1;
    for(int i=1; i<=1000006; i++)
    {
        pw[i]=(pw[i-1]*b);
    }
}
void sHash(int l,int r,string s)
{
    v=0;
    int cont=0,j;
    for(int i=l,j=0; i<r; i++,j++)
    {
        if(mp1[s[i]]==1)cont++;
        if(cont>k)break;
        v+=s[i]*pw[j];
        if(mp2[v]==1)continue;
        mp2[v]=1;
        res++;
    }
}
int main()
{
    FastRead;
    string s1,s2;
    gnrtPow();
    cin >> s1 >> s2;
    cin >> k;
    int len1=s1.size();
    int len2=s2.size();
    for(int i=0; i<26; i++)
    {
        if(s2[i]=='1')mp1[i+'a']=0;
        else mp1[i+'a']=1;
    }
    for(int i=0; i<len1; i++)sHash(i,len1,s1);
    cout << res << endl;
}

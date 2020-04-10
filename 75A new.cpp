#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,k,res1=0,res2=0,res3=0;
    string s;
    cin >> n >> m;
    ll ok=n+m;
    i=0,k=0;
    while(n!=0)
    {
        if(n%10!=0)
        {
            s[i]=(n%10)+48;
            i++;
            k++;
        }
        n/=10;
    }
    for(i=k-1; i>=0; i--)
    {
        res1=(res1*10)+(s[i]-48);
    }
    i=0,k=0;
    while(m!=0)
    {
        if(m%10!=0)
        {
            s[i]=(m%10)+48;
            i++;
            k++;
        }
        m/=10;
    }
    for(i=k-1; i>=0; i--)
    {
        res2=(res2*10)+(s[i]-48);
    }
    i=0,k=0;
    while(ok!=0)
    {
        if(ok%10!=0)
        {
            s[i]=(ok%10)+48;
            i++;
            k++;
        }
        ok/=10;
    }
    for(i=k-1; i>=0; i--)
    {
        res3=(res3*10)+(s[i]-48);
    }
    if(res1+res2==res3)cout  << "YES" << endl;
    else cout << "NO" << endl;
}

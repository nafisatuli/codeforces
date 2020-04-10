#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define  vv      vector<int>
#define  vv1     vector<long long>
#define  pb      push_back
#define  pp      pop
#define  MAX     1000005
#define  mod     1000000007
int main()
{
    fastread();
    string s;
    cin >> s;
    ll n=0,m=0;
    ll l=s.length();
    for(ll i=l-1;i>=0;i--)
    {
        if(s[i]=='a')
        {
            n+=m;
            m*=2;
            n%=mod;
            m%=mod;
        }
        else m++;
    }
    cout << n << endl;
}

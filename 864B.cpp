#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define  vv      vector<int>
#define  vv1     vector<long long>
#define  pb      push_back
#define  pp      pop
#define  All(a)  a.begin(),a.end()
#define  MAX     1000005
#define  mod     1000000007
#define  modd    1000003
map<char,int>mp;
set<char>st;
int main()
{
    fastread();
    ll n,x,a,sum=0;
    cin >> n >> x;
    for(ll i=1;i<=n;i++)
    {
        cin >> a;
        sum+=a;
    }
    ll temp=(x-n)+1;
    if(sum==temp)cout << "YES" << endl;
    else cout << "NO" << endl;
}

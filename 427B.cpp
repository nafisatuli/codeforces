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
int main()
{
    fastread();
    ll n,t,c,x,cont1=0,cont2=0;
    cin >> n >> t >> c;
    for(ll i=1; i<=n; i++)
    {
        cin >> x;
        if(x<=t)cont1++;
        if(x>t)cont1=0;
        if(cont1==c)cont1--,cont2++;
    }
    cout << cont2 << endl;
}


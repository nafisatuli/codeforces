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
map<int,int>mp;
set<char>st;
ll mx=0;
ll res=0;
void binary_search(ll aa[],ll cum[],ll in,ll k,ll n)
{
    ll low=1;
    ll high=in;
    while(low<=high)
    {
        ll mid=(low+high)/2;
        ll occur=(in-mid+1);
        ll temp=abs((occur*aa[in])-(cum[in]-cum[mid-1]));
        //cout << "while check: " << occur << " " << temp << " " << in << endl;
        if(temp<=k)
        {
            if(occur>mx)
            {
                mx=occur;
                res=aa[in];
                //cout << mx << " " << res << " "<<in<< endl;
            }
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
}
int main()
{
    fastread();
    ll n,k;
    cin >> n >> k;
    ll aa[n+5],cum[n+5];
    memset(aa,0,sizeof(aa));
    memset(cum,0,sizeof(cum));
    for(ll i=1;i<=n;i++)cin >> aa[i];
    sort(aa+1,aa+n+1);
    for(ll i=1;i<=n;i++)
    cum[i]+=aa[i]+cum[i-1];
    //for(ll i=1;i<=n;i++)cout << cum[i] << endl;
    for(ll i=1;i<=n;i++)binary_search(aa,cum,i,k,n);
    return cout << mx << " " << res << endl,0;
}

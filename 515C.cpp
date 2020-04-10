#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define  vv      vector<int>
#define  vv1     vector<long long>
#define  pb      push_back
#define  pp      pop
#define  MAX     1000005
int main()
{
    fastread();
    ll n,x,m;
    vv1 vec1;
    cin >> n >> m;
    while(m>0)
    {
        x=m%10;
        m/=10;
        if(x==2||x==3||x==5||x==7)
            vec1.pb(x);
        else if(x==4)
        {
            vec1.pb(3),
                    vec1.pb(2),
                    vec1.pb(2);
        }
        else if(x==6)
        {
            vec1.pb(5),
                    vec1.pb(3);
        }
        else if(x==8)
        {
            vec1.pb(7),
                    vec1.pb(2),
                    vec1.pb(2),
                    vec1.pb(2);
        }
        else if(x==9)
        {
            vec1.pb(7),
                    vec1.pb(3),
                    vec1.pb(3),
                    vec1.pb(2);
        }
        else if(x==1||x==0)
            continue;
    }
    ll l=vec1.size();
    sort(vec1.begin(),vec1.end(),greater<ll>());
    for(ll i=0; i<l; i++)cout << vec1[i];
    cout << endl;

}

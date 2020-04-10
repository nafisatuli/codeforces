#include<bits/stdc++.h>
using namespace std;
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    ll l1,r1,l2,r2;
    while(t--)
    {
        cin >> l1 >> r1 >> l2 >> r2;
        ll res1=(l1+r1)/2;
        ll res2=(l2+r2)/2;
        if(res1==res2)res1++;
        cout << res1 << " " << res2 << endl;
    }
}

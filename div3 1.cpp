#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q,n,a,b,cost1,cost2;
    cin >> q;
    while(q--)
    {
        cin >> n >> a >> b;
        if(n<a&&n<b)
        {
            if(a<b)cout << a << endl;
            else cout << b << endl;
        }
        else if(n%2==0&&a<b)
        {
            ll res=n*a;
            cout << res << endl;
        }
        else if(n%2==0&&b>a)
        {
            ll res=n*b;
            cout << res << endl;
        }
        else if(n%2!=0&&b<a)
        {
            ll res=n/2;
            cost1=res*b;
            cost2=(n%2)*b;
            cout << cost1+cost2 << endl;
        }
        else
        {
            ll res=n/2;
            cost1=res*b;
            cost2=(n%2)*b;
            cout << cost1+cost2 << endl;
        }
    }
}

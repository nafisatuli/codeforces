#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,s;
    cin >> a >> b >> s;
    ll t1=abs(a)+abs(b);
    ll t2=s%2,t3=t1%2;
    if(t3==t2&&s>=t1)
        cout << "Yes" << endl;
    else cout << "No" << endl;
}

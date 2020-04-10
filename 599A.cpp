#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll d1,d2,d3;
    cin >> d1 >> d2 >> d3;
    ll dis1=d1+d2+d3;
    ll dis2=(d1*2)+(d2*2);
    ll dis3=(d1*2)+(d3*2);
    ll dis4=(d2*2)+(d3*2);
    ll mn1=min(dis3,dis4);
    ll mn2=min(mn1,dis2);
    ll res=min(dis1,mn2);
    cout << res << endl;
}

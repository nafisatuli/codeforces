#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x,y,z,a,b,c;
    int f=0;
    cin >> x >> y >> z;
    cin >> a >> b >> c;
    if(a>=x)
    {
        a=a-x;
        if(a+b>=y)
        {
            int temp;
            temp=(a+b)-y;
            if(temp+c>=z)
            {
                f=1;
            }
        }
    }
    if(f==1)cout << "YES" << endl;
    else cout << "NO" << endl;
}

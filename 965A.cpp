#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,s,p,r,t,q;
    cin >> k >> n >> s >> p;
    r=n/s;
    if(r*s!=n)r++;
    t=r*k;
    q=(t/p);
    if(q*p!=t)q++;
    cout << q << endl;
}

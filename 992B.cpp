#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll l,r,x,y,cont=0,temp,i;
    cin >> l >> r >> x >> y;
    i=sqrt(r);
    while(l<=i)
    {
        temp=y/l;
        if(__gcd(temp,i)==x)cont+=2;
        l++;
    }
    cout << cont << endl;
}

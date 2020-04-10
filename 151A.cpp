#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p>> nl >> np;
    int ok1=(k*l)/nl;
    int ok2=(c*d);
    int ok3=(p/np);
    int min1=min(ok1,ok2);
    min1=min(min1,ok3)/n;
    cout << min1 << endl;
}

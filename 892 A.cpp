#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL n,x,sum=0;
    cin >> n;
    LL aa[n+5];
    for(LL i=0; i<n; i++)
    {
        cin >> x;
        sum+=x;
    }
    for(LL i=0; i<n; i++)
    {
        cin >> aa[i];
    }
    sort(aa,aa+n);
    if(aa[n-1]+aa[n-2]>=sum)cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

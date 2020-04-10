#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int main()
{
    LL n,m,res,aa[55],bb[55];
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> aa[i];
    for(int i=0; i<m; i++) cin >> bb[i];
    sort(bb,bb+m);
    sort(aa,aa+n);
    res=bb[m-1]*aa[n-2];
    cout << res << endl;
    return 0;
}

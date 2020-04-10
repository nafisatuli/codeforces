#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll aa[100005],bb[100005],n1,n2,k,m;
    cin >> n1 >> n2 >> k >> m;
    for(int i=0; i<n1; i++)cin >> aa[i];
    for(int i=0; i<n2; i++)cin >> bb[i];
    if(aa[k-1]<bb[n2-m])cout << "YES" << endl;
    else cout << "NO" << endl;
}

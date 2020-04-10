#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,aa[1005],flag=0;
    cin >> n >> m;
    for(int i=0; i<n; i++)cin >> aa[i];
    sort(aa,aa+n);
    if(aa[0]>m)
    {
        cout << "NO" << endl;
        return 0;
    }
    for(int i=1; i<n-1; i++)
    {
        aa[i]=aa[i]+aa[i-1];
        if(aa[i]>m)
        {
            flag=1;
            cout << "NO" << endl;
            break;
        }
    }
    if(flag==0)cout << "YES" << endl;
}

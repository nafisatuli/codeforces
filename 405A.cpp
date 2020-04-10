#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,aa[10006];
    cin >> n;
    for(int i=0; i<n; i++)cin >> aa[i];
    sort(aa,aa+n);
    for(int i=0; i<n; i++)
    {
        cout << aa[i];
        if(i!=n)
            cout << " ";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,mx,aa[105];
    cin >> n;
    for(int i=0; i<n; i++)cin >> aa[i];
    sort(aa,aa+n);
    mx=aa[n-1];
    for(int i=0; i<n; i++)
    {
        if(mx>=aa[i])sum+=mx-aa[i];
    }
    cout << sum << endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,aa[105],count=0,k;
    cin >> n >> k;
    for(int i=0; i<n; i++)cin >> aa[i];
    for(int i=0; i<n; i++)
    {
        if(aa[i]<=k)count++;
        else break;
    }
    if(count!=n)
        for(int i=n-1; i>=0; i--)
        {
            if(aa[i]<=k)count++;
            else break;
        }
    cout << count << endl;
    return 0;
}

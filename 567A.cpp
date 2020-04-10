#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa[100000],n,mn,mx,mn1,mn2,mx1,mx2;
    cin >> n;
    for(int i=1; i<=n; i++)cin >> aa[i];
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            mn=abs(aa[i]-aa[i+1]);
            mx=abs(aa[i]-aa[n]);
        }
        else if(i==n)
        {
            mn=abs(aa[i]-aa[i-1]);
            mx=abs(aa[i]-aa[1]);
        }
        else
        {
            mn1=abs(aa[i]-aa[i+1]);
            mn2=abs(aa[i]-aa[i-1]);
            if(mn1>mn2)mn=mn2;
            else mn=mn1;
            mx1=abs(aa[i]-aa[1]);
            mx2=abs(aa[i]-aa[n]);
            if(mx1>mx2)mx=mx1;
            else mx=mx2;
        }
        cout << mn << " " << mx << endl;
    }
}

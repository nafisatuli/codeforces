#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,aa[105],ok1,ok2;
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++)cin >> aa[i];
    for(int i=m-1; i>=1; i--)
    {
        if(aa[i]<=k&&aa[i]!=0)
        {
            ok1=i;
            break;
        }
    }
    for(int i=m+1; i<=n; i++)
    {
        if(aa[i]<=k&&aa[i]!=0)
        {
            ok2=i;
            break;
        }
    }
    if(((m-ok1)>=0)&&((ok2-m)>=0))
    {
        if((m-ok1)<(ok2-m))cout << (m-ok1)*10 << endl;
        else cout << (ok2-m)*10 << endl;
    }
    else if((ok2-m)>=0)cout << (ok2-m)*10 << endl;
    else cout << (m-ok1)*10 << endl;
}

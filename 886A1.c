#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,aa[105],p=0,x=0,m;
    cin >> n >> t;
    for(int i=1;i<=n;i++)
    {
        cin >> aa[i];
        if(aa[i]==86400)
        {
            if(x>=t) continue;
            p++;
        }
        else if(aa[i]<=86400)
        {
            if(x>=t) continue;
            x+=86400-aa[i];
            p++;
        }
    }
    cout << p << endl;
    return 0;
}

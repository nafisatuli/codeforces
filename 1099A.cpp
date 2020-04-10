#include<bits/stdc++.h>
using namespace std;
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    int w,h,u1,u2,d1,d2;
    cin >> w >> h;
    cin >> u1 >> d1 >> u2 >> d2;
    int res=w;
    while(h>0)
    {
        res+=h;
        if(h==d1)res-=u1;
        else if(h==d2)res-=u2;
        h--;
        res=max(res,0);
    }
    cout << res << endl;
}




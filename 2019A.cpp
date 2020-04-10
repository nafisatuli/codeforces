#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll i,j,t1,t2;
        cin >> i >> j;
        int ok=0;
        for(ll k=i; k<=j; k++)
        {
            for(ll o=i;o<=j;o++)
            {
                if(o%k==0)
                {
                    cout << o << " " << k << endl;
                    ok=1;
                }
                if(ok==1)break;
            }
            if(ok==1)break;
            ok=0;
        }
        //cout << t1 << " " << t2 << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int q;
    int l,r,d,res;
    cin >> q;
    while(q--)
    {
        cin >> l >> r >> d;
        if((l<d&&r<d)||(l<d&&r>d))
        {
            res=l+r;
        }
        else if(l<r)
        {
            if(l%d==0&&r%d==0)
            {
                res=d;
            }
            else
            {
                res=d;
            }
        }
        else if(r<l)
        {
            if(l%d==0&&r%d==0)
            {
                res=d;
            }
        }
        cout << res << endl;
    }
}

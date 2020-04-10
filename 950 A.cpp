#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a,res,ok;
    cin >> l >> r >> a;
    if((l==0 && a==0)or(r==0 && a==0))
    {
        cout << "0" << endl;
    }
    else if(l==r)
    {
        res=l+r+(a/2)*2;
        cout << res << endl;
    }
    else if(l<=a&&r<=a)
    {
        res=((l+r+a)/2)*2;
        cout << res << endl;
    }
    else if(l>a && r> a)
    {
        if(l<r)
        {
            ok=l+a;
            if(ok<=r)cout << ok*2 << endl;
            else
            {
                res=((l+r+a)/2)*2;
                cout << res << endl;
            }
        }
        else if(r<l)
        {
            ok=r+a;
            if(ok<=l) cout << ok*2 << endl;
            else
            {
                res=((l+r+a)/2)*2;
                cout << res << endl;
            }
        }
    }

    else if(l>a)
    {
        ok=a+r;
        if(ok<=l) cout << ok*2 << endl;
        else
        {
            res=((l+r+a)/2)*2;
            cout << res << endl;
        }
    }
    else if(r>a)
    {
        ok=l+a;
        if(ok<=r)cout << ok*2 << endl;
        else
        {
            res=((l+r+a)/2)*2;
            cout << res << endl;
        }
    }

}

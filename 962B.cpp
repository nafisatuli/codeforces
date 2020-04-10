#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a,b,cont=0,f=0,l;
    string s;
    cin >> n >> a >> b;
    cin >> s;
    l=s.length();
    for(ll i=0; i<l; i++)
    {
        if(a==0&&b==0)
        {
            break;
        }
        if(s[i]=='.')
        {
            if(f==0)
            {
                if(a>=b&&a>0)
                {
                    cont++;
                    a--;
                    f=1;
                }
                else if(b>=a&&b>0)
                {
                    cont++;
                    b--;
                    f=2;
                }
            }
            else if(f==2&&a>0)
            {
                cont++;
                a--;
                f=1;
            }
            else if(f==1&&b>0)
            {
                cont++;
                b--;
                f=2;
            }
            else f=0;
        }
        else f=0;
    }
    cout << cont << endl;
}

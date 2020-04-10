#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,t;
    cin >> n;
   for(int t=1;t<=n;t++)
    {
        cin >> a >> b >> c;
        if(a<=20&&b<=20&&c<=20)
        {
            printf("Case %d: good\n",t);
        }
        else
        {
            printf("Case %d: bad\n",t);
        }
    }
}

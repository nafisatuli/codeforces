#include<bits/stdc++.h>
using namespace std;
int main()
{
    int res,sum=0,n,temp,t=0,k=0,h=0;
    cin >> n;
    res=n;
    while(n)
    {
        sum+=n%10;
        n=n/10;
    }
    if(sum%4==0)
        cout << res << endl;
    else
    {
        if(res%2==0)cout << res+2 << endl;
        else cout << res+4 << endl;
    }
}

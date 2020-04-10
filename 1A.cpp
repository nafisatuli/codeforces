#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,x,y,res;
    cin >> n >> m>> t;
    x=(m+t-1)/t;
    y=(n+t-1)/t;
    res=x*y;
    cout << res << endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    FastRead;
    int n,d,x,p=0,aa[105];
    cin >> n >> d;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        d-=x;
        if(i<n-1)
            d-=10,p+=10;
    }
    if(d<0)cout << "-1" << endl;
    else cout << (d+p)/5 << endl;
}


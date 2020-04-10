#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    if(n==0||k==0||n==k)cout << "0" << " " << "0" << endl;
    else
    {
        int x=n-k,y=k*2;
        int res=min(x,y);
        cout << "1" << " " << res << endl;
    }
}

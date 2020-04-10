#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        cin >> x >> y;
    }
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)cout<< "0";
        else cout << "1";
    }
}

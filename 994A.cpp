#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int x[n+5],y[m+5];
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin >> x[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> y[i];
        mp[y[i]]=1;
    }
    for(int i=0; i<n; i++)
    {
        if(mp[x[i]]==1)
            cout << x[i] << " ";
    }
    cout << endl;
}

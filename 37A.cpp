#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n,x,mx=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        mp[x]++;
        if(mp[x]>mx)
        {
            mx=mp[x];
        }
    }
    cout << mx << " " << mp.size() << endl;
}

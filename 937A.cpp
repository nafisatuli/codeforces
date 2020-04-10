#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int n,x,ct=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x>0)
        mp[x]++;
    }
    for(int i=0; i<=600; i++)
    {
        if(mp[i]>0)
            ct++;
    }
    cout << ct << endl;
}

#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>mp;
int main()
{
    int n,x,k=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        mp[x]++;
        if(mp[x]>k)k=mp[x];
    }
    cout << k << endl;
}

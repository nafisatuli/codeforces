#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
    int n;
    string s;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        if(mp[s]!=0)cout << "YES" << endl;
        else cout << "NO" << endl;
        mp[s]=1;
    }
}

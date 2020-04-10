#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
    int n;
    string s;
    cin >> n;
    while(n--)
    {
        cin >> s;
        mp[s]++;
        if(mp[s]!=1)cout << s << mp[s]-1 << endl;
        else cout << "OK" << endl;
    }
}

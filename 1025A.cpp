#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    int n,f=0;
    string s;
    cin >> n >> s;
    if(n==1)return cout << "Yes" << endl,0;
    for(int i=0; i<n; i++)
    {
        mp[s[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(mp[s[i]]>1)f=1;
    }
    if(f==1)cout << "Yes" << endl;
    else cout << "No" << endl;
}

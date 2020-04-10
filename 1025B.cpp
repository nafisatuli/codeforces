#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    int n,cont=0;
    string s;
    cin >> n >> s;
    int len=s.length();
    for(int i=0; i<len-1; i++)
    {
        mp[s[i]]++;
    }
    for(int i=0; i<len-1; i++)
    {
        if(mp[s[i]]>=2)cont=1;
    }
    if(cont==1)cout << "Yes" << endl;
    else cout << "No" << endl;
}

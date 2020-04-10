#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    string s;
    cin >> s;
    int l;
    l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='r')
            v.push_back(i+1);
    }
    for(int i=l;i>=0;i--)
    {
        if(s[i]=='l')
            v.push_back(i+1);
    }
    for(int i=0;i<l;i++)
        cout << v[i] << endl;
}

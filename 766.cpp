#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int len1=s1.length();
    int len2=s2.length();
    if(s1==s2)cout << "-1" << endl;
    else
    {
        if(len1>len2)cout << len1 << endl;
        else cout << len2 << endl;
    }
}

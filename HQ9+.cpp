#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,f=0;
    string s;
    cin >> s;
    l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
           f=1;
    }
    if(f==1) cout << "YES" << endl;
        else cout << "NO" << endl;
}

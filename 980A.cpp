#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,cnt=0,f=0;
    string s;
    cin >> s;
    l=s.length();
    for(int i=0; i<l; i++)
    {
        if(s[i]=='o')
            f++;
        if(s[i]=='-')
        {
            cnt++;
        }
    }
    if(cnt%2==0&&f>0)cout << "YES" << endl;
    else cout << "NO" << endl;
}

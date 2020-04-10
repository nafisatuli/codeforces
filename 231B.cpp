#include<bits/stdc++.h>
using namespace std;
int main()
{
    int u=0,d=0,l=0,r=0;
    string s;
    cin >> s;
    int len=s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i]=='U')u++;
        if(s[i]=='D')d++;
        if(s[i]=='R')r++;
        if(s[i]=='L')l++;
    }
    int x1=abs(u-d);
    int x2=abs(l-r);
    int res=(x1+x2);
    if(res%2==0)cout << res/2 << endl;
    else cout << "-1" << endl;
}

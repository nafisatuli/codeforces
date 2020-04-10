#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,one=0,zero=0;
    string s;
    cin >> n >> s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
       if(s[i]=='1')
       {
           if(s[i++]=='0')
            f=1;
       }
       else if(s[i]=='0')
       {
           if(s[i++]=='1')
            f=1;
       }
    }
}

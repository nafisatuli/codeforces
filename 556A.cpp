#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,zero=0,one=0,res;
    string s;
    cin >> n >> s;
    int l=s.length();
    for(int i=0; i<l; i++)
    {
        if(s[i]=='0')zero++;
        if(s[i]=='1')one++;
    }
    if(one>=zero)res=(l-(2*zero));
    else res=(l-(2*one));
    cout << res << endl;
}

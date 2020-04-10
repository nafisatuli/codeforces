#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int l,a=0,d=0;
    l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='A')a++;
        else if(s[i]=='D')d++;
    }
    if(a>d)cout << "Anton" << endl;
    else if(d>a) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
}

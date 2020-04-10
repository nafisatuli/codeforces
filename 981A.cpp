#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int l,k=0;
    cin >> s;
    l=s.length();
    for(int i=l-1; i>=0; i++)
    {
        cout << s[i];
        s1[k]=s[i];
        k++;
    }
    if(s1==s)cout << "0" << endl;
    else cout << l << endl;
}

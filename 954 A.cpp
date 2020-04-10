#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,l;
    string s;
    cin >> n >> s;
    l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='U' and s[i+1]=='R')
        {
            i++;
            k++;
        }
        else if(s[i]=='R' and s[i+1]=='U')
        {
            i++;
            k++;
        }
    }
    cout << l-k << endl;
}

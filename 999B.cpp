#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=0;
    string s,s1;
    cin >> n >> s;
    int len=s.length();
    for(int i=(len-1)/2; i>=0; i--)
    {
        s1[j]=s[i];
        j++;
    }
    cout << s1 << endl;
}

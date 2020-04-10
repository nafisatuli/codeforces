#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int len1=s1.size();
    int len2=s2.size();
    int t=len2,cont=0;
    for(int i=len1-1; i>=0; i--)
    {
        if(s1[i]==s2[--len2])cont++;
        else break;
    }
    int res=(len1+t)-(cont*2);
    cout << res << endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int f=0;
    cin >> s1 >> s2;
    int len=s1.length();
    for(int i=0;i<len;i++)
    {
        if(s2[i]>s1[i])
        {
            cout << "-1" << endl;
            f=1;
            break;
        }
    }
    if(f==0)cout << s2 << endl;
}

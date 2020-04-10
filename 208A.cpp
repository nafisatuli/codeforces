#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool flag;
    string s;
    cin >> s;
    int len=s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i+=2;
            if(flag==true)
            {
                cout <<" ";
                flag=false;
            }
        }
        else
        {
            cout << s[i];
            flag=true;
        }
    }
}

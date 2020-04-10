#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    string s;
    cin >> s;
    int len=s.length();
    for(int i=1;i<len;i++)
    {
        if(islower(s[i]))
            flag=1;
    }
    if(flag==0)
    {
        for(int i=0;i<len;i++)
        {
            if(islower(s[i]))
                s[i]=toupper(s[i]);
            else if(isupper(s[i]))
                s[i]=tolower(s[i]);
        }
        cout << s << endl;
    }
    else cout << s << endl;
}

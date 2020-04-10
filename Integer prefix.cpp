#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,l;
    string s;
    char s1[100000];
    cin >> s;
    l=s.length();
    j=0;
    for(int i=0; i<l; i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            s1[j]=s[i];
            j++;
        }
        else
            break;
    }
    if(j==0)
    {
        cout << "-1" << endl;
        return 0;
    }
    cout << s1 << endl;
    cout << endl;
}

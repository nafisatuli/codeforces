#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cont=0,flag=0;
    string s;
    cin >> s;
    int len=s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i]=='V'&&s[i+1]=='K')cont++;
        else if(s[i]=='V'&&s[i+1]=='V'&&s[i+2]!='K'&&flag==0)
        {
            cont++;
            s[i+1]='K';
            flag=1;
        }
        else if(s[i-1]!='V'&&s[i]=='K'&&s[i+1]=='K'&&flag==0)
        {
            cont++;
            s[i]='V';
            flag=2;
        }
    }
    cout << cont << endl;
}

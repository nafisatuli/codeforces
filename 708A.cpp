#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cont=0,j=0,len;
    string s,s1="\0";
    getline(cin , s);
    len=s.size();
    for(int i=0; i<len; i++)s1+=s[i];
    for(int i=0; i<len; i++)
    {
        if(s[i]=='a')
        {
            cont++;
            continue;
        }
        else s1[i]=s[i]-1;
        if(s[i]!='a'&&s[i+1]=='a')
        {
            s1[i]=s[i]-1;
            break;
        }
    }
    if(cont==len)s1[len-1]='z';
    cout << s1 << endl;
}

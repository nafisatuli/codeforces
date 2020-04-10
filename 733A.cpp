#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int cont=0,max=0;
    string s;
    getline(cin , s);
    int len=s.size();
    for(int i=0; i<=len; i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {
            cont++;
            if(cont>max)
            {
                max=cont;
            }
            cont=0;
        }
        else cont++;
    }
    if(cont>max)cout << cont << endl;
    else cout << max << endl;
}

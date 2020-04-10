#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int min,f=0,l,k=0,p=0,j=0;
    cin >> s;
    l=s.size();
    min=s[0]-'a';
    for(int i=0; i<l; i++)
    {
        if((s[i]-'a')<min)
        {
            f=1;
        }
        min=s[i]-'a';
        if(s[i]=='a')k++;
        if(s[i]=='b')j++;
        if(s[i]=='c') p++;
    }
    if (f==0 && k!=0 & j!=0 &&( p==k || p==j))cout << "YES" << endl;
    //if((f==1)||(k==0)||(j==0)) cout << "NO" << endl;
    else cout << "NO" << endl;
}


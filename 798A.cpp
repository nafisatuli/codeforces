#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cont=0;
    string s;
    cin >> s;
    int len=s.length();
    for(int i=0,j=len-1; i<(len/2)&&j>=0; i++,j--)
    {
        if(s[i]!=s[j])
        {
            cont++;
        }
    }
    if(cont==0&&len%2!=0)return cout << "YES" << endl,0;
    if(cont!=1)cout << "NO" << endl;
    else cout << "YES" << endl;
}

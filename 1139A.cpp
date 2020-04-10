#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    int l=s.length();
    int cont=0;
    for(int i=0;i<l;i++)
    {
        int temp=s[i]-48;
        if(temp%2==0)
        cont+=(i+1);
    }
    cout << cont << endl;
}

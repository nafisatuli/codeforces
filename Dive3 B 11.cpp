#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    map<string,int>cnt;
    LL n;
    int l,mn=0;
    string s;
    string sq("  ");
    cin >> n >> s;
    l=s.length();
    for(int i=1; i<l; i++)
    {
        sq[0]= s[i-1];
        sq[1]=s[i];
        if(sq.compare(0,1," ")&&sq.compare(1,1," "))
        {
            cnt[sq]++;
        }
    }
    for(map<string,int>::iterator it=cnt.begin(); it!=cnt.end(); it++)
    {
        if(mn<it->second)
        {
            mn=it->second;
        }
        cout << mn << endl;
    }

}


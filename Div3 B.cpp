#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
map<string,int>cnt;
int main()
{
    LL n;
    int l;
    string s;
    std::string sq(" ");
    cin >> n >> s;
    l=s.length();
    for(int i=1;i<l;i++)
    {
       sq[0]= s[i-1];
       sq[1]=s[i];
       if(sq.compare(0,1," ")&&sq.compare(1,1," "))
       {
           cnt[sq]++;
       }
    }
    for(map<string,int>::iterator it=cnt.begin();it!=cnt.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}

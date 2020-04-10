#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define  vv      vector<int>
#define  vv1     vector<long long>
#define  pb      push_back
#define  pp      pop
#define  All(a)  a.begin(),a.end()
#define  MAX     1000005
#define  mod     1000000007
#define  modd    1000003
map<int,int>mp;
set<char>st;
int main()
{
    fastread();
    string s;
    int n,x,y;
    cin >> n >> x >> y;
    cin >> s;
    int len=s.length();
    reverse(s.begin(),s.end());
    int cnt=0;
    for(int i=0; i<x; i++)
    {
        if(i==y)
        {
            if(s[i]=='0')
                cnt++;
            else continue;
        }
        else if(s[i]=='1')cnt++;
    }
    return cout << cnt << endl,0;
}

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
map<char,int>mp;
int main()
{
    fastread();
    mp['>']=8;
    mp['<']=9;
    mp['+']=10;
    mp['-']=11;
    mp['.']=12;
    mp[',']=13;
    mp['[']=14;
    mp[']']=15;

    string s;
    cin >> s;
    int len,res=0;
    len=s.length();
    for(int i=0;i<len;i++)
    {
        res=(res*16)+mp[s[i]];
        res%=modd;
    }
    cout << res << endl;
}

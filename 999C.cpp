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
map<char,int>mp;
int main()
{
    fastread();
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i=0; i<n; i++)mp[s[i]]++;
    for(char i='a'; i<='z'; i++)
    {
        if(mp[i]<=k)
        {
            k-=mp[i];
        }
        else
        {
            mp[i]=k;
            k=0;
        }
    }
//    map<char,int>::iterator it;
//    for(it=mp.begin();it!=mp.end();it++)
//   {
//       cout << it->first << " "<< it->second << endl;
//   }
    for(int i=0; i<n; i++)
    {
        if(mp[s[i]])mp[s[i]]--;
        else cout << s[i];
    }
}

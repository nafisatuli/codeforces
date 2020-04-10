#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define prr pair<int,int>
map<prr,string>mp;
int main()
{
    int temp1,temp2;
    int p,q,n,m,a,b;
    string s;
    cin >> n;
    while(n--)
    {
        cin >> p >> q >> s;
        prr temp1=make_pair(p,q);
        mp[temp1]=s;
    }
    cin >> m;
    while(m--)
    {
        cin >> a >> b;
        prr temp2=make_pair(a,b);
        cout << mp[temp2] << endl;
    }
}

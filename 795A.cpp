#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,c1,c2;
    cin >> n >> c1 >> c2;
    string s;
    cin >> s;
    ll len=s.length();
    if(len==1)
        return cout << c1 << endl,0;
    cout << 2*(c1+c2*(c2-1)*(c2-1)) << endl;
}

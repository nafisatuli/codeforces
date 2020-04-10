#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>vv;
int main()
{
    ll x;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x>0&x%2!=0&&x<x+1)vv.push_back(x);
        else if(x>0&&x%2==0&&x>x-1)
        {
            x-=1;
            vv.push_back(x);
        }
    }
    for(int i=0; i<vv.size(); i++)
        cout << vv[i] << " ";
    cout << endl;
}

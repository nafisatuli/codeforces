#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>mp;
int main()
{
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x!=0)
        {
            mp[x]++;
        }
    }
    cout << mp.size() << endl;
}

#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n,m,k,v;
    cin >> n >> m;
    bool f1 = false,f2;
    for(int i=0; i<m; i++)
    {
        cin >> k;
        f2 = true;
        for(int j=0; j<k; j++)
        {
            cin >> v;
            if(!f1)
            {
                mp[v]++;
                if(mp[v]>=1&&mp[-v]>=1)
                {
                    f2=false;
                }
            }
        }
        if(f2)f1=true;
        mp.clear();
    }
    if(f1)cout << "YES" << endl;
    else cout << "NO" << endl;
}

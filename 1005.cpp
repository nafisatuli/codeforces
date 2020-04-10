#include<bits/stdc++.h>
using namespace std;
vector<int>vv;
int main()
{
    int n,aa[1005],cont=0,k=0;
    cin >> n;
    aa[0]=0;
    for(int i=1; i<=n; i++)cin >> aa[i];
    aa[n+1]=0;
    for(int i=1; i<=n; i++)
    {
        if(aa[i]>=aa[i+1])
        {
            cont++;
            vv.push_back(i-k);
            k=i;
        }
    }
    cout << cont << endl;
    int len=vv.size();
    for(int i=0; i<vv.size(); i++)
    {
        cout << vv[i];
        if(i!=len-1)
            cout << " ";
    }
    cout << endl;
}

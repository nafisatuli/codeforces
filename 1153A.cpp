#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,j,k,f,g=0;
    cin >> t >> n;
    for(int i=1;i<=t;i++)
    {
        cin >> j >> k;
        if(g==1)continue;
        else if(n<k)
        {
            f=i;
            g=1;
        }
    }
    cout << f << endl;
}

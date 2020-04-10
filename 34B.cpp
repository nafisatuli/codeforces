#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,aa[1005],cont=0,sum=0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> aa[i];
    }
    sort(aa,aa+n);
    for(int i=0; i<n; i++)
    {
        if(aa[i]>=0)break;
        if(cont<m)
        {
            cont++;
            if(aa[i]<0)
            {
                aa[i]=aa[i]*(-1);
            }
            sum+=aa[i];
        }
    }
    cout << sum << endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa[1005],cc[1005],k,cont=0;
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++)cin >> aa[i];
    for(int i=0; i<m; i++)cin >> cc[i];
    for(int i=0; i<n; i++)
    {
        int temp;
        if(i==0)temp=cc[i];
        if(temp>=aa[i])
        {
            cont++;
            k++;
            temp=cc[k];
        }
    }
    cout << cont << endl;
}

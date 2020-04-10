#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,aa[1000];
    cin >> n;
    int cont=0;
    for(int i=1;i<=n;i++)cin >> aa[i];
    for(int i=2;i<n;i++)
    {
        if(aa[i]!=1&&aa[i-1]==1&&aa[i+1]==1)
        {
            cont++;
            aa[i+1]=0;
        }
    }
    cout << cont << endl;
}

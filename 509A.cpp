#include<bits/stdc++.h>
using namespace std;
int aa[105][105];
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; i++)
        {
            aa[i][j]=1;
        }
    }
    for(int i=2; i<=n; i++)
    {
        aa[i][1]=1;
        for(int j=2; j<=n; j++)
        {
            aa[i][j]=aa[i-1][j]+aa[i][j-1];
        }
    }
    cout << aa[n][n] << endl;
    return 0;
}

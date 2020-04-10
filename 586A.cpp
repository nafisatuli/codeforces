#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,aa[100],cont=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> aa[i];
        if(aa[i]==1)
            cont++;
    }
    for(int i=1;i<n;i++)
    {
        if(aa[i-1]==1&&aa[i]==0&&aa[i+1]==1)
            cont++;
    }
    cout << cont << endl;
}

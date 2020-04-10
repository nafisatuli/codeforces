#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,aa[105],f=0,k=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> aa[i];
    }
    for(int i=1; i<=aa[i]; i++)
    {
        if(aa[i]%i==0)
            k++;
    }
    cout << k << endl;
}



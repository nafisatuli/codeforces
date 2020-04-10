#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL n,res,res1,k=0;
    cin >> n;
    for(int i=1; i<=n/2; i++)
    {
        res=n-i;
        res1=res/i;
        if(res1*i==res)
        {
            k++;
        }
    }
    cout << k << endl;
    return 0;
}

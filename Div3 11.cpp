#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL n,temp;
    int k;
    cin >> n >> k;
    for(int i=1;i<=k;i++)
    {
        temp=n;
        if(temp%10!=0)
        {
            n=temp-1;
        }
        else
        {
            n=temp/10;
        }
    }
    cout << n << endl;
}


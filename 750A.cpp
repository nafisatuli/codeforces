#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cont=0,sum=0;
    cin >> n >> k;
    int t=240-k;
    for(int i=1; i<=n; i++)
    {
        sum+=i*5;
        if(sum>t)break;
        else cont++;
    }
    cout << cont <<endl;
}

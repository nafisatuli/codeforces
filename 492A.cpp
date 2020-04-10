#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,cont=0,res=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        sum+=i;
        res+=sum;
        if(res>n)break;
        else cont++;
    }
    cout << cont << endl;
}

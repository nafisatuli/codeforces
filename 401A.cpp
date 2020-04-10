#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0,x,res;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        sum+=x;
    }
    int sum1=abs(sum);
    res=sum1/m;
    if(sum1%m!=0)res++;
    cout << res << endl;
}

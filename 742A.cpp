#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v=1378,temp,res=1,ans;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        temp=v;
        res*=temp;
    }
    ans=res%10;
    cout << ans << endl;
}

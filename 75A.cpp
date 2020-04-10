#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,k,res1;
    string str;
    cin >> n >> m;
    i=0,k=0;
    while(n!=0)
    {
        if(n%10!=0)
            str[i]=(n%10)+48;
            i++,k++;
    }
    while(k!=0)
    {
        res1=(res1*10)+(str[i]-48);
        k--;
    }
    cout << res1;
}

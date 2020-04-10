#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,cont=0;
    cin >> n;
    for(ll i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            cont++;
            if((n/i)>sqrt(n))cont++;
        }
    }
    cout << cont << endl;
}

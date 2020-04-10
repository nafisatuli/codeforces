#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x,cont=0;
    cin >> x;
    while(x>0)
    {
        if(x%2)
        {
            cont++;
            x--;
        }
        else x/=2;
    }
    cout << cont << endl;
}

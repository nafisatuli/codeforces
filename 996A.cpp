#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,temp=0;
    int aa[]= {100,20,10,5,1};
    cin >> n;
    for(int i=0; i<5; i++)
    {
        temp+=n/aa[i];
        n%=aa[i];
    }
    cout << temp << endl;
}

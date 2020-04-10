#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin >> n >> m;
    int c,o;
    o=m-1;
    c=n-o;
    if(c%2==0) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    x=n/5;
    if(n==(x*5)) cout << x << endl;
    else cout << x+1 << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    int p1=(n-a);
    int p2=min(p1,b+1);
    cout << p2 << endl;
}

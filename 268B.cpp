#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,j=0;
    cin >> n;
    for(int i=n; i>=1; i--)
    {
        sum+=i+((i-1)*j);
        j++;
    }
    cout << sum << endl;
}

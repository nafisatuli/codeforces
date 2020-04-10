#include<bits/stdc++.h>
using namespace std;
int main()
{
    double sum=0,x,n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        sum+=x;
    }
    cout << sum/n << endl;
}

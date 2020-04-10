#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin >> n >> t;
    if(n==1)
    {
        if(t<10)cout << t << endl;
        else cout << "-1" << endl;
    }
    else
    {
        if(t==10)
        {
            t=1;
        }
        cout << t;
        for(int i=0;i<n-1;i++)
        {
            cout << "0";
        }
        cout << endl;
    }
}

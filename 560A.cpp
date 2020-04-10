#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,f=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x==1)
        {
            f=1;
            break;
        }
    }
    if(f==1)cout << "-1" << endl;
    else cout << "1" << endl;
}

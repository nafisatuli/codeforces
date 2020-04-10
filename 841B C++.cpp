#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x%2!=0)
        {
            cout << "First" << endl;
            return 0;
        }
    }
    cout << "Second" << endl;
    return 0;
}

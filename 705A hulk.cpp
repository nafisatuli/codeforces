#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int t=1;t<=n;t++)
    {
        if(t%2!=0)
        {
            cout << "I hate"<< " ";
        }
        else cout << "I love" << " ";
        if(t==n)
        {
            cout << "it" << " ";
        }
        else cout << "that" << " ";
    }
    return 0;
}

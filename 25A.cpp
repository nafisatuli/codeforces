#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x[105],pos1,pos2,even=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x[i];
        if(x[i]%2!=0)pos1=i;
        else
        {
            pos2=i;
            even++;
        }
    }
    if(even==(n-1))cout << pos1 << endl;
    else cout << pos2 << endl;
}

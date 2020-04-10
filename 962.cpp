#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ok=0,sum=0,aa[10005],position;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> aa[i];
        sum+=aa[i];
    }
    for(int i=1; i<=n; i++)
    {
        ok+=aa[i];
        if(ok>=(sum/2))
        {
            position=i;
            break;
        }
    }
    cout << position << endl;

}

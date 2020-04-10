#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,temp,ok=0;
    cin >> n >> m;
    for(int i=1; i<=m; i++)
    {
        cin >> x;
        if(x<=n)
        {
            temp=sqrt(x);
            cout << temp << endl;
            if(temp*temp!=x)
            {
                ok++;
            }
        }
    }
    cout << ok << endl;
}

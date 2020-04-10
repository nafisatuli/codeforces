#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,cont=1,res=0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(res+x<=m)res+=x;
        else
        {
            cont++;
            res=x;
        }
    }
    cout << cont << endl;
}

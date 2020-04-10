#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,k,cont=0;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(k==1)
        {
            if(x<=4)
            {
                cont++;
            }
        }
        else if(k==2)
        {
            if(x<=3)
            {
                cont++;
            }
        }
        else if(k==3)
        {
            if(x<=2)
            {
                cont++;
            }
        }
        else if(k==4)
        {
            if(x<=1)
            {
                cont++;
            }
        }
        else if(k==5)
        {
            if(x<=0)
            {
                cont++;
            }
        }
    }
    int res=cont/3;
    cout << res << endl;
}

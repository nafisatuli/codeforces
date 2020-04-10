#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,x,m=0,y,z;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        temp=sqrt(x);
        if(x<0)
        {
            temp=temp*(-1);
            z=x*(-1);
            if(temp*temp!=z)
            {
                if(x<m)
                {
                    m=x;
                    y=m;
                }
            }
        }
        else if(temp*temp!=x)
        {
            if(x>m)
            {
                m=x;
                y=m;
            }
        }
    }
   cout << y << endl;
}

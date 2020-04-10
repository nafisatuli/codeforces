#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=1,cont=0;
    int aa[100000];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> aa[i];
    }
    for(int i=0; i<n; i++)
    {
        if(f==1)
        {
            if(aa[i]==1)
            {
                if(aa[i+1]!=1)
                {
                    cont++;
                    f=0;
                }
            }
        }
        else
        {
            if(aa[i]==10)
            {
                if(aa[i+1]!=10)
                {
                    cont++;
                    f=1;
                }
            }
        }
    }
    cout << cont << endl;
}

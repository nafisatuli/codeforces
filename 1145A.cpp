#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0,aa[100],f=0;
    cin >> n;
    int a,t=0,cont=0,j=0;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(a>=t)
        {
            t=a;
            cont++;
        }
        else
        {
            aa[j]=cont;
            j++;
            cont=0;
            t=0;
            f=1;
        }
    }
    for(int i=0;i<j;i++)cout << aa[i] << " ";
    if(f==1)
    {
        for(int k=0; k<j-1; k++)
        {
            //cout << aa[k] << " ";
            if(aa[k]>aa[k+1])
            {
                res=aa[k];
            }
        }
        //cout <<"res" <<endl;
        //cout << res << endl;
    }
    else cout << cont << endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k=0,max=-9999999;
    char ch;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        getchar();
        int f=0;
        for(int j=0;j<n;j++)
        {
            cin >> ch;
            if(ch=='0')
            {
                f=1;
            }
        }
        if(f==1)
        {
            k++;
        }
        else
        {
            k=0;
        }
        if(k>max)
        {
            max=k;
        }
    }
    cout << max << endl;
}

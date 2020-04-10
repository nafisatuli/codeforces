#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,hm[105],gt[105],cont=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> hm[i] >> gt[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                if(hm[i]==gt[j])cont++;
            }
        }
    }
    cout << cont << endl;
}

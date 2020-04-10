#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,aa[3005],cont=0;
    cin >> n;
    for(int i=0; i<n; i++)cin >> aa[i];
    sort(aa,aa+n);
    for(int i=1; i<n; i++)
    {
        if(aa[i]<=aa[i-1])
        {
            while(aa[i]<=aa[i-1])
            {
                aa[i]+=1;
                cont++;
            }
        }
    }
    cout << cont << endl;
}

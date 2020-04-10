#include<bits/stdc++.h>
using namespace std;
int aa[10005];
int main()
{
    int n,cont=1,res=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> aa[i];
        int j=i;
        for(int j=1; j<i; j++)
        {
            if(aa[i]==aa[j])
            {
                cont++;
            }
        }
    }
    cout << cont << endl;
}

#include<bits/stdc++.h>
using namespace std;
char aa[200005];
int main()
{
    int n,pq,ath,k=0;
    cin >> n >> pq >> ath;
    for(int i=0; i<n; i++)
    {
        cin >> aa[i];
        if(aa[i]=='.')
        {
            k++;
        }
    }
    if(k<=pq+ath)cout << k << endl;
    else if(pq+ath<k)cout << pq+ath << endl;
    else cout << "0" << endl;
}

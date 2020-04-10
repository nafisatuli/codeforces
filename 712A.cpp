#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll aa[10000010],bb[10000010];
int main()
{
    ll n;
    int j=0;
    cin >> n;
    for(int i=0; i<n; i++)cin >> aa[i];
    for(int i=0; i<n-1; i++)
    {
        bb[j]=aa[i]+aa[i+1];
        j++;
    }
    bb[j++]=aa[n-1];
    for(int i=0; i<j; i++)cout << bb[i] << " ";
    cout << endl;
    return 0;
}

#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,t,aa[105],p=0;
    cin >> n >> t;
    for(int i=1;i<=n;i++)
    {
        cin >> aa[i];
        p+=aa[i];
    }
    cout << (p+t)/86400<< endl;
}

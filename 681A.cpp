#include<bits/stdc++.h>
using namespace std;
struct info
{
    string s;
    int af;
    int be;
};
int main()
{
    info aa[4005];
    int an1,an2,flag=0,n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> aa[i].s >> aa[i].af >> aa[i].be;
        if(aa[i].af>=2400)
        {
            if(aa[i].af<aa[i].be)
            {
                flag=1;
            }
        }
    }
    if(flag==1)cout << "YES" << endl;
    else cout << "NO" << endl;
}

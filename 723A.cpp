#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,aa[10006];
    for(int i=0; i<3; i++)
    {
        cin >> x;
        aa[i]=x;
    }
    sort(aa,aa+3);
    int res=(aa[0]-aa[1])+(aa[1]-aa[2]);
    cout << abs(res) << endl;
}

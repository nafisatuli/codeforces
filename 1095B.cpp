#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define  vv      vector<int>
#define  vv1     vector<long long>
#define  pb      push_back
#define  pp      pop
#define  All(a)  a.begin(),a.end()
#define  MAX     1000005
#define  mod     1000000007
int main()
{
    fastread();
    int n,x,m;
    vv vec1;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        vec1.pb(x);
    }
    sort(All(vec1));
    m=min((vec1[n-2]-vec1[0]),(vec1[n-1]-vec1[1]));
    cout << m << endl;
}


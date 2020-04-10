#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define  vv      vector<int>
#define  vv1     vector<long long>
#define  pb      push_back
#define  pp      pop
#define  MAX     1000005
#define  mod     1000000007
int main()
{
    fastread();
    int n,x,m=0;
    double sum=0,sum2=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        sum+=x;
        m=max(m,x);
    }
    sum2=ceil((((sum*2))+1)/n);
    if(sum2<m)cout << m << endl;
    else cout << sum2 << endl;
}

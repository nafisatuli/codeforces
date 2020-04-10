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
#define  modd    1000003
map<int,int>mp;
set<int>st;
int aa[100005],bb[100005];
int main()
{
    fastread();
    int n,k,temp=0,l=0,r;
    cin >> n >> k;
    for(int i=0; i<n; i++)cin >> aa[i];
    for(temp=0; temp<n&&(int)st.size()<k; temp++)
    {
        st.insert(aa[temp]);
    }
    int len=st.size();
    if(len<k) return cout<< "-1 -1" << endl,0;
    for(int i=0;i<temp;i++)bb[aa[i]]++;
    while(l<temp)
    {
        bb[aa[l]]--;
        if(bb[aa[l]]==0)break;
        l++;
    }
    return cout << l+1 << " " << temp << endl,0;
}

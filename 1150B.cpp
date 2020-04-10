#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char aa[505][505];
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();
    int n;
    cin >> n;
    bool flag=true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> aa[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(aa[i][j]=='.')
            {
               if(aa[i+1][j-1]!='.')flag=false;
               if(aa[i+1][j]!='.')flag=false;
               if(aa[i+1][j+1]!='.')flag=false;
               if(aa[i+2][j]!='.')flag=false;
               if(flag==false)break;
               aa[i+1][j-1]='#';
               aa[i+1][j]='#';
               aa[i+1][j+1]='#';
               aa[i+2][j]='#';
               aa[i][j]='#';
            }
        }
    }
    if(flag==false)cout << "NO" << endl;
    else cout << "YES" << endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cont;
    bool f=false;
    cin >> n >> m;
    char aa[n+5][m+5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> aa[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(aa[i][j]=='.')
            {
                if(aa[i-1][j-1]=='*'||aa[i-1][j]=='*'||aa[i-1][j+1]=='*'||aa[i][j-1]=='*'||aa[i][j+1]=='*'||aa[i+1][j+1]=='*'||aa[i+1][j]=='*'||aa[i+1][j+1]=='*')
                {
                    f=true;
                    break;
                }
            }
            else if(aa[i][j]!='.'&&aa[i][j]!='*')
            {
                cont=0;
                if(aa[i-1][j-1]=='*')cont++;
                if(aa[i-1][j]=='*')cont++;
                if(aa[i-1][j+1]=='*')cont++;
                if(aa[i][j-1]=='*')cont++;
                if(aa[i][j+1]=='*')cont++;
                if(aa[i+1][j+1]=='*')cont++;
                if(aa[i+1][j]=='*')cont++;
                if(aa[i+1][j+1]=='*')cont++;
                if(cont!=(aa[i][j]-'0'))
                {
                    f=true;
                    break;
                }
            }
        }
        if(f==true)break;
    }
    if(f==true) cout << "NO" << endl;
    else cout << "YES" << endl;
}

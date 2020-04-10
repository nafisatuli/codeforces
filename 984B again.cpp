#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    bool flag=false;
    cin >> n >> m;
    char aa[n+5][m+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> aa[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(aa[i][j]=='.')
            {
                if(aa[i-1][j-1]=='*'||aa[i-1][j]=='*'||aa[i-1][j+1]=='*'||aa[i][j-1]=='*'||aa[i][j+1]=='*'||aa[i+1][j-1]=='*'||aa[i+1][j]=='*'||aa[i+1][j+1]=='*')
                {
                    flag=true;
                    break;
                }
            }
            else if(aa[i][j]!='*'&&aa[i][j]!='.')
            {
                k=0;
                if(aa[i-1][j-1]=='*')k++;
                if(aa[i-1][j]=='*')k++;
                if(aa[i-1][j+1]=='*')k++;
                if(aa[i][j-1]=='*')k++;
                if(aa[i][j+1]=='*')k++;
                if(aa[i+1][j-1]=='*')k++;
                if(aa[i+1][j]=='*')k++;
                if(aa[i+1][j+1]=='*')k++;
                if(k!=(aa[i][j]-'0'))
                {
                    flag=true;
                    break;
                }
            }
        }
        if(flag==true)break;
    }
    if(flag==true)cout << "NO" << endl;
    else cout << "YES" << endl;
}

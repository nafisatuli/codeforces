#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,aa[1005],bb[1005];
    while(cin >> n >> m)
    {
        if(n==0&&m==0)break;
        int sum1=0,sum2=0;
        for(int i=1; i<=n; i++)
        {
            cin >> x;
            if(x==2) sum1+=2;
            else if(x==3)sum1+=5;
            else if(x==4)sum1+=9;
            else if(x==5)sum1+=14;
            else if(x==6)sum1+=19;
            else if(x==7)sum1+=26;
            else if(x==8)sum1+=32;
            else if(x==9)sum1+=38;
        }
        for(int i=1; i<=m; i++)
        {
            cin >> y;
            if(y==2) sum2+=2;
            else if(y==3)sum2+=5;
            else if(y==4)sum2+=9;
            else if(y==5)sum2+=14;
            else if(y==6)sum2+=19;
            else if(y==7)sum2+=26;
            else if(y==8)sum2+=32;
            else if(y==9)sum2+=38;
        }
        if(sum1==sum2)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

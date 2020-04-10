#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,s1=0,s2=0,s3=0,s4=0,sum=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(s1==1)s1++;
        else if(s2==2)s2++;
        else if(s3==3)s3++;
        else s4++;
    }
    sum+=s4;
    s4=0;
    sum+=(s2/2);
    s2%=2;
    if(s1>=s3)
    {
        sum+=s3;
        s1=s1-s3;
        s3=0;
        sum+=s1/4;
        s1%=4;
        if(s1+s2*2<=4&&s1+s2*2>0)
        {
            sum++;
            s1=0,s2=0;
        }
        else if(s1==3&&s2==1)
        {
            sum+=2;
            s1=0,s2=0;
        }
    }
    else
    {
        sum+=s1;
        s3=s3-s1;
        s1=0;
        sum+=s2+s3;
    }
    cout << sum << endl;
}

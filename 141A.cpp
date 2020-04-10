#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa[10005],bb[10005],f;
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    int l1=s1.length();
    int l2=s2.length();
    int l3=s3.length();
    for(int i=0; i<l1; i++)
        aa[s1[i]]++;
    for(int i=0; i<l2; i++)
        aa[s2[i]]++;
    for(int i=0; i<l3; i++)
        bb[s3[i]]++;
    for(int i='A'; i<='Z'; i++)
    {
        aa[i]-=bb[i];
        if(aa[i]==0)
            f=0;
        else
        {
            f=1;
            break;
        }
    }
    if(f==0)cout << "YES" << endl;
    else cout << "NO" << endl;
}

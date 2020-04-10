#include<bits/stdc++.h>
using namespace std;
int arr[100050];
int main()
{
    string s;
    int n,m,res,l,r;
    cin >> s;
    int len=s.length();
    for(int i=1;i<len;i++)
    {
        if(s[i-1]==s[i])
        {
            arr[i]++;
        }
        arr[i]+=arr[i-1];
    }
    cin >> m;
    for(int i=0;i<m;i++)
    {
        cin >> l >> r;
        res=arr[r-1]-arr[l-1];
        cout << res << endl;
    }
}

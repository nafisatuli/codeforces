#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>mp;
int main()
{
    int n,j=0,sum=0,x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    //cout << mp[4] << " " << mp[3] << " " << mp[2] << " " << mp[1] << endl;
    j=mp[4]+mp[3]+(mp[2]/2);
    mp[1]-=mp[3];
    //cout << mp[1] << endl;
    if(mp[2]%2!=0)
    {
        j++;
        mp[1]-=2;
        //cout << mp[1] << endl;
    }
    if(mp[1]>0)
    {
        j+=(mp[1]+3)/4;
    }
    cout << j << endl;
}

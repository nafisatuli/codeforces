#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
   int n,m,ok,aa[105],f=0;
   cin >> n >> m;
   for(int i=0;i<n;i++)
   {
       cin >> ok;
       for(int j=0;j<ok;j++)
       {
           cin >> aa[i];
           mp[aa[i]]++;
       }
   }
   for(int i=1;i<=m;i++)
   {
       if(mp[i]==0)
       {
           f=1;
           cout << "NO" << endl;
           break;
       }
   }
   if(f==0)cout << "YES" << endl;
}

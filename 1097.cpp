#include<bits/stdc++.h>
using namespace std;
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
   string s1,s2;
   cin >> s1;
   bool flag=false;
   for(int i=0;i<5;i++)
   {
       cin >> s2;
       for(int j=0;j<s2.size();j++)
       {
           if(s2[j]==s1[0]||s2[j]==s1[1])
           {
               flag=true;
           }
       }
   }
   if(flag)cout << "YES" << endl;
   else cout << "NO" << endl;
}



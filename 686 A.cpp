#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,m,nmbr,k=0,i;
   char ch;
   cin >> n >> m;
   for(i=0;i<n;i++)
   {
       cin >> ch >> nmbr;
       if(ch=='+')
       {
           m=m+nmbr;
       }
       else
       {
           if(m-nmbr<0)
           {
               m=m;
               k++;
           }
           else
           {
               m=m-nmbr;
           }
       }
   }
   cout << m << " " << k << endl;
}

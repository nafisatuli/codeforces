#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k=0,cont=0,flag=0;
    string s;
    cin >> s;
    int len=s.length();
    for(int i=0; i<len; i++)
    {
       if(s[i]=='a'||s[i]=='e'||s[i]=='u'||s[i]=='i'||s[i]=='o'||s[i]=='n')continue;
       else
       {
           if(s[i+1]=='a'||s[i+1]=='u'||s[i+1]=='o'||s[i+1]=='e'||s[i+1]=='i')continue;
           else
           {
               flag=1;
               break;
           }
       }
    }
    if(flag==1)printf("NO\n");
    else printf("YES\n");
}

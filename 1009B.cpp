#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int ok = 1;
inner :
//    while(ok)
//    {
//        ok = 0;
    for(int i= 0; i<len ; i++)
    {
        string sub = s.substr(i,2);
        if(sub == "10")
        {
            swap(s[i],s[i+1]);
            int j = i;
            while(j)
            {
                if(s[j]=='0' && s[j-1]=='1') swap(s[j],s[j-1]);
                else break;
                j--;
            }
        }
        else if(sub == "21")
        {
            swap(s[i],s[i+1]);
            int j = i;
            while(j)
            {
                if(s[j]=='1' && s[j-1]=='2') swap(s[j],s[j-1]);
                else break;
                j--;
            }
        }
         else if(sub == "12")
        {
            swap(s[i],s[i+1]);
            int j = i;
            while(j)
            {
                if(s[j]=='1' && s[j-1]=='2') swap(s[j],s[j-1]);
                else break;
                j--;
            }
        }
         else if(sub == "01")
        {
            swap(s[i],s[i+1]);
            int j = i;
            while(j)
            {
                if(s[j]=='1' && s[j-1]=='2') swap(s[j],s[j-1]);
                else break;
                j--;
            }
        }
    }
//   }
    cout << s << endl;
}

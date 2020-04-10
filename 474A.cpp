#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    string s1="qwertyuiopasdfghjkl;zxcvbnm,./",s2;
    cin >> ch;
    cin >> s2;
    int l1=s1.length();
    int l2=s2.length();
    if(ch=='R')
    {
        for(int i=0; i<l2; i++)
        {
            for(int j=0; j<l1; j++)
            {
                if(s2[i]==s1[j])
                {
                    s2[i]=s1[j-1];
                    break;
                }
            }
        }
    }
    else if(ch=='L')
    {
        for(int i=0; i<l2; i++)
        {
            for(int j=0; j<l1; j++)
            {
                if(s2[i]==s1[j])
                {
                    //cout << s2[i] << " " << s2[j+1] << endl;
                    s2[i]=s1[j+1];
                    break;
                }
            }
        }
    }
    cout << s2 << endl;
}

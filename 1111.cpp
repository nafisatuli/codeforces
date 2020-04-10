#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int l1=s1.length();
    int l2=s2.length();
    int cont1=0,cont2=0,l;
    bool f=false;
    if(l1<l2)
    {
        l=l2;
    }
    else l=l1;
    for(int i=0; i<l; i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        {
            if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
            {
                f=true;
            }
        }
        else if(s1[i]!='a'||s1[i]!='e'||s1[i]!='i'||s1[i]!='o'||s1[i]!='u')
        {
            if(s2[i]!='a'||s2[i]!='e'||s2[i]!='i'||s2[i]!='o'||s2[i]!='u')
            {
                f=true;
            }
        }
        else if(s1[i]!='a'||s1[i]!='e'||s1[i]!='i'||s1[i]!='o'||s1[i]!='u')
        {
            if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
            {
                f=false;
            }
        }
        else if(s1[i]!='a'||s1[i]!='e'||s1[i]!='i'||s1[i]!='o'||s1[i]!='u')
        {
            if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
            {
                f=false;
            }
        }

    }
    if(f)
    {
        printf("Yes\n");
    }
    else printf("No\n");
}

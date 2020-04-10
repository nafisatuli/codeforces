#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    string str[7]= {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    cin >> s1 >> s2;
    if((s1.compare(s2))==0)cout << "YES" << endl;
    else if((s1.compare(str[0]))==0)
    {
        if((s2.compare(str[6]))==0||(s2.compare(str[4]))==0)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    else if((s1.compare(str[4]))==0)
    {
        if((s2.compare(str[0]))==0||(s2.compare(str[6]))==0)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    else if((s1.compare(str[6]))==0)
    {
        if((s2.compare(str[0]))==0||(s2.compare(str[4]))==0)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    else if(s1.compare(str[5])==0)
    {
        if(s2.compare(str[3])==0)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    else if(s1.compare(str[3])==0)
    {
        if(s2.compare(str[5])==0)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
}

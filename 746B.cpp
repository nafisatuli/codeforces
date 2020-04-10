#include <iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    string s;
    cin>>len;
    cin>>s;
    vector<char> vect;

    while(len!=0)
    {
        if(len%2==1)
        {
            cout << s[0] << endl;
            vect.push_back(s[0]);
        }
        else
        {
            //cout << vect.begin() << " " << s[0] << endl;
            vect.insert(vect.begin(),s[0]);
            cout << s[0] << " else" << endl;
        }
        s.erase(0,1);
        len=s.length();
    }
    for(int i=0; i<vect.size(); i++)
    {
        cout<<vect[i];
    }

    return 0;
}

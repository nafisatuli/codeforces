#include<bits/stdc++.h>
using namespace std;
vector<char>vv;
int main()
{
    int l;
    string s;
    cin >> l;
    cin >> s;
    while(l!=0)
    {
        if(l%2==0)vv.insert(vv.begin(),s[0]);
        else vv.push_back(s[0]);
        s.erase(0,1);
        l=s.size();
    }
    for(int i=0; i<vv.size(); i++)cout << vv[i];
    cout << endl;
    return 0;
}

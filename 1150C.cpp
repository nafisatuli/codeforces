#include<bits/stdc++.h>
using namespace std;
vector<int>vec1,vec2;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();
    int x,n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x==1)vec1.push_back(x);
        else vec2.push_back(x);
    }
    if(vec2.size()>0)
    {
        cout << 2 << " ";
        vec2.pop_back();
    }
    if(vec1.size()>0)
    {
        cout << 1 << " ";
        vec1.pop_back();
    }
    for(int i=0;i<vec2.size();i++)
        cout << vec2[i] << " ";
    for(int i=0;i<vec1.size();i++)
        cout << vec1[i] << " ";
}

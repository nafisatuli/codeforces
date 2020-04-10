#include<bits/stdc++.h>
using namespace std;
vector<int>odd;
vector<int>even;
int main()
{
    int n,x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x%2==0)
        {
            even.push_back(x);
        }
        else
        {
            odd.push_back(x);
        }
    }
    int res=0,k=0;
    if(even.size()-odd.size()==0||(abs(even.size()-odd.size()))==0)
    {
        cout << 0 << endl;
        return 0;
    }
    if(odd.size()>even.size())
    {
        k=odd.size()-even.size()-1;
        sort(odd.begin(),odd.end());
        for(int i=0; i<k; i++)
        {
            res+=odd[i];
        }
        cout << res << endl;
        return 0;
    }
    else if(odd.size()<even.size())
    {
        k=even.size()-odd.size()-1;
        sort(even.begin(),even.end());
        for(int i=0; i<k; i++)
        {
            res+=even[i];
        }
        cout << res << endl;
        return 0;
    }
}

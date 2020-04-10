#include<bits/stdc++.h>
using namespace std;
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    int l=s.length();
    int j=1;
    for(int i=0;i<=l;i+=j)
    {
        cout << s[i];
        j++;
    }
}


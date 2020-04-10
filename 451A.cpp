#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,res;
    cin >> a >> b;
    res=min(a,b);
    if(res%2==0)cout << "Malvika" << endl;
    else cout << "Akshat" << endl;
}

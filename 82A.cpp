#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    while(n>5)n=(n/2)-2;
    if(n==1)cout << "Sheldon" << endl;
    else if(n==2) cout << "Leonard" << endl;
    else if(n==3)cout << "Penny" << endl;
    else if(n==4)cout << "Rajesh" << endl;
    else cout << "Howard" << endl;
}

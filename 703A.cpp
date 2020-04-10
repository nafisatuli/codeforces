#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,a=0,b=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> m >> c;
        if(m>c)a++;
        else if(m<c)b++;
        else a++,b++;
    }
    if(a>b)cout << "Mishka" << endl;
    else if(b>a)cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
}

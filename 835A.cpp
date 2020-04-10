#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,v1,v2,t1,t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int x1=t1*2+(s*v1);
    int x2=t2*2+(s*v2);
    if(x1<x2)
        cout << "First" << endl;
    else if(x2<x1)
        cout << "Second" << endl;
    else cout << "Friendship" << endl;
    return 0;
}

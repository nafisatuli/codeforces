#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,i=1;
    cin >> k >> r;
    if(k%10==0||k%10==r)return cout << "1" << endl,0;
    else
    {
        for(;; i++)
        {
            if((i*k)%10==0||(i*k)%10==r)
                break;
        }
    }
    cout << i << endl;
}

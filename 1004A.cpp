#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,temp,cont=2;
    cin >> n >> d;
    int arr[n+5];
    for(int i=0; i<n; i++)cin >> arr[i];
    for(int i=1; i<n; i++)
    {
        temp=abs(arr[i]-arr[i-1]);
        if(temp==(d*2))cont++;
        else if(temp>(d*2))cont+=2;
        //cout << temp << " " << cont << endl;
    }
    cout << cont << endl;
}

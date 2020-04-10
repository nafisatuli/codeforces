#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	long long int x,y;
	cin >> n;
	long long int v[1005];
	for(int i=0;i<n;i++)
	{
		cin >> x;
		v[i]=x;
	}
	sort(v,v+n);
	if(n%2==0)
	cout << v[n/2-1] << endl;
	else cout << v[n/2] << endl;
}


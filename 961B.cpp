#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005]= {0}, arr2[100005]= {0},sum1[100005]= {0};
int main()
{
    ll i,j, n, k,ans=-INT_MAX, sum=0;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(i=1; i<=n; i++)
    {
        cin>>arr2[i];
    }
    // if(arr2[1]==0) sum1[0]=arr[0];
    for(i=1; i<=n; i++)
    {
        if(arr2[i]==0)
            sum1[i]=arr[i];
        else sum1[i]=0;
        sum1[i]+=sum1[i-1];
        //cout << sum1[i] << " " << sum1[i-1] << endl;
    }

    sum=0, j=k;
    for(i=k; i<=n; j++, i++)
    {
        if(j==k)
        {
            j--;
            sum=sum1[i]-sum1[i-k];
            ans=max(ans, sum);
             //cout << ans << endl;
        }
    }
    sum=0;
    for(i=1; i<=n; i++)
    {
        if(arr2[i]==1) sum+=arr[i];

    }
    cout<<sum+ans<<endl;

}

#include<bits/stdc++.h>
using namespace std;
int u,v,cost,n,e,k;
vector<pair<int,int> >vv[100006];
priority_queue<pair<int,int> >qq;
int dis[100006],res[100006];
void Dijkstra(int str)
{
    for(int i=1;i<=n;i++)dis[i]=1e9;
    qq.push({0,str});
    dis[str]=0;
    k=n;
    while(!qq.empty())
    {
        int temp=qq.top().second;
        for(int i=0;i<vv[temp].size();i++)
        {
            if(dis[temp]+vv[temp][i].second<dis[vv[temp][i].first])
            {
                dis[vv[temp][i].first]=dis[temp]+vv[temp][i].second;
                qq.push({-dis[vv[temp][i].first],vv[temp][i].first});
                res[k]=dis[vv[temp][i].first];
                k--;
            }
        }
    }
}
int main()
{
    cin >> n >> e;
    for(int i=0;i<e;i++)
    {
        cin >> u >> v >> cost;
        vv[u].push_back(make_pair(v,cost));
        vv[v].push_back(make_pair(u,cost));
    }
    Dijkstra(1);
    if(dis[n]==1e9)
    {
        printf("-1\n");
    }
    else
    {
        for(int i=1;i<=n;i++)
            cout << res[i] << " ";
        cout << endl;
    }
}

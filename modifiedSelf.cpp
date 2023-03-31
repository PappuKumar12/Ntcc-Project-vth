#include<bits/stdc++.h>
using namespace std;
const int INF = 100;

int main()
{
    int m, n;
    cout<<"Enter two number of node and edges: ";
    cin>>m>>n;

    vector<vector<int>> edges;
    for(int i=0; i<n; i++)
    {
        int u, v, w;
        cout<<"Enter src, dest, cost: ";
        cin>>u>>v>>w;
        edges.push_back({u, v, w});
    }

    int src;
    cout<<"Enter src: ";
    cin>>src;
    vector<int> dist(m, INF);
    dist[0]=0;
    for(int i=0; i<m-1; i++)
    {
        for(auto e: edges)
        {
            int u = e[0];
            int v = e[1];
            int w = e[2];
            dist[v]=min(dist[v], w+dist[u]);
        }
    }
    for(auto i: dist)
    {
        cout<<i<<endl;
    }
    cout<<endl;
    return 0;
}
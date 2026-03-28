// BFS -> Breadth first search algorithm 
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int vertex,edge;
    cout<<"Enter edge of this graph: ";
    cin>>edge;
    cout<<"Enter vertex of this graph: ";
    cin>>vertex;
    vector<int>adj[vertex];
    int u,v;

    for(int i=0;i<edge;i++)
    {
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }

    // print adjancy list of this graph 
    for(int i=0;i<vertex;i++)
    {
        cout<<i<<" - > ";
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    // From Here BFS Search 
    vector<bool>visited(edge,0);
    vector<int>ans;
    queue<int>q;

    q.push(0);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        visited[node] = 1;
        ans.push_back(node);

        for(int i=0;i<adj[node].size();i++)
        {
            if(visited[adj[node][i]] == 0)
            {
                q.push(adj[node][i]);
            }
        }
    }
    

    // print BFS Traversal 
    for(int i=0;i<edge;i++)
    {
        cout<<ans[i]<<" ";
    }

}
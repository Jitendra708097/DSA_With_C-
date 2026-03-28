#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int vertex,edge,weight;
   vector<pair<int,int>>adjList[vertex];

   cin>>vertex>>edge;

   int u,v;
   for(int i=0;i<vertex;i++)
   {
     cin>>u>>v>>weight;
     adjList[u].push_back(make_pair(v,weight));
     adjList[v].push_back(make_pair(v,weight));
   }

//    print adjancy list 
for(int i=0;i<vertex;i++)
{
    cout<<i<<"->";
    for(int j=0;j<adjList[i].size();j++)
    {
    
    }
}
}